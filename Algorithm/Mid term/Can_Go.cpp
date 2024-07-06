#include <bits/stdc++.h>
using namespace std;
const long long int N = 1005;
vector<pair<long long int,long long int>> v[N];
long long int dis[N];
class cmp
{
    public:
    bool operator()(pair<long long int,long long int> a,pair<long long int,long long int> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<long long int,long long int>,vector<pair<long long int,long long int>>,cmp> pq;
    pq.push({src,0});
    dis[src] = 0;
    while(!pq.empty())
    {
        pair<long long int,long long int> par = pq.top();
        pq.pop();
        int node = par.first;
        int cost = par.second;
        for(pair<long long int,long long int> child:v[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if(cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode,dis[childNode]});
            }
        }
    }
}
int main()
{
    long long int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        long long int w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
    }
    for(int i=1;i<=n;i++)
    {
        dis[i] = INT_MAX;
    }
    int src;
    cin >> src;
    int t;
    cin >> t;
    while(t--)
    {
        int des;
        long long int cost;
        cin >> des >> cost;
        dijkstra(src);
        if(cost >= dis[des])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}