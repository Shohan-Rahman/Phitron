#include <bits/stdc++.h>
using namespace std;
class edge 
{
    public:
    long long int u,v;
    long long int c;
    edge(long long int u,long long int v,long long int c) 
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const long long int N = 1e6;
long long int dis[N];
int main()
{
    long long int n,e;
    cin >> n >> e;
    vector<edge> EdgeList;
    while(e--) 
    {
        long long int u,v,c;
        cin >> u >> v >> c;
        EdgeList.push_back(edge(u,v,c));
    }
    for(int i = 1; i <= n; i++) 
    {
        dis[i] = 1e18;
    }
    int src;
    cin >> src;
    dis[src] = 0;
    for(int i=1;i<=n-1;i++) 
    {
        for(edge ed:EdgeList) 
        {
            long long int u,v,c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if(dis[u] < 1e18 && dis[u] + c < dis[v]) 
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    for(edge ed:EdgeList) 
    {
        long long int u,v,c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if(dis[u] < 1e18 && dis[u] + c < dis[v]) 
        {
            cycle = true;
            break;
        }
    }
    if(cycle) 
    {
        cout << "Negative Cycle Detected" << endl;
    } 
    else 
    {
        int q;
        cin >> q;
        while(q--) 
        {
            int des;
            cin >> des;
            if(dis[des] == 1e18) 
            {
                cout << "Not Possible" << endl;
            } 
            else 
            {
                cout << dis[des] << endl;
            }
        }
    }
    return 0;
}
