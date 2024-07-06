#include <bits/stdc++.h>
using namespace std;
int const N = 1e5 + 5;
int parent[N];
int group_size[N];
int level[N];
void dsu_initialize(int n)
{
    for(int i=0;i<n;i++)
    {
        parent[i] = -1;
    }
}
int dsu_find(int node)             //O(log(N))
{
    if(parent[node] == -1)
    {
        return node;
    }
    int leader = dsu_find(parent[node]);
    return leader;
}
void dsu_union(int node1,int node2)      //Bad  //O(N)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    parent[leaderA] = leaderB;
}
void dsu_union_by_level(int node1, int node2)      //O(log(N))
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (level[leaderA] > level[leaderB])
    {
        parent[leaderB] = leaderA;
    }
    else if (level[leaderB] > level[leaderA])
    {
        parent[leaderA] = leaderB;
    }
    else
    {
        parent[leaderA] = leaderB;
        level[leaderB]++;
    }
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
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
int main()
{
    dsu_initialize(7);
    dsu_union_by_level(1, 2);
    dsu_union_by_level(2, 3);
    dsu_union_by_level(4, 5);
    dsu_union_by_level(5, 6);
    dsu_union_by_level(1, 4);
    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;
    return 0;
}