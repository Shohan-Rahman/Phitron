#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5+5;
ll parent[N];
ll group_size[N];
void dsu_initialize(ll n)
{
    for(ll i=0;i<n;i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
ll dsu_find(ll node)
{
    if(parent[node] == -1) return node;
    ll leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(ll node1,ll node2)
{
    ll leaderA = dsu_find(node1);
    ll leaderB = dsu_find(node2);
    if(group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
class Edge
{
    public:
    ll u,v,c;
    Edge(ll u,ll v,ll c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
bool cmp(Edge a,Edge b)
{
    return a.c < b.c;
}
int main()
{
    ll n,e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edgeList;
    while(e--)
    {
        ll u,v,c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u,v,c));
    }
    sort(edgeList.begin(),edgeList.end(),cmp);
    ll totalCost = 0;
    ll cnt = 0;
    for(Edge ed : edgeList)
    {
        ll leaderU = dsu_find(ed.u);
        ll leaderV = dsu_find(ed.v);
        if(leaderU == leaderV)
        {
            continue;
        }
        else
        {
            dsu_union_by_size(ed.u,ed.v);
            totalCost += ed.c;
            cnt++;
        }
    }
    if(cnt == n-1)
    cout << totalCost << endl;
    else
    cout << "-1" << endl;
    return 0;
}