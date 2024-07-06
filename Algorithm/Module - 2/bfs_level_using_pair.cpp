#include <bits/stdc++.h>
using namespace std;
vector<int> v[1000];
bool vis[1000];
void bfs(int src,int des)
{
    queue<pair<int,int>> q;
    q.push({src,0});
    vis[src] = true;
    bool available = false;
    while(!q.empty())
    {
        pair<int,int> p = q.front();
        int par = p.first;
        int level = p.second;
        q.pop();
        // cout << par << endl;
        if(par == des)
        {
            cout << level << endl;
            available = true;
        }
        for(int child:v[par])
        {
            if(vis[child] == false)
            {
                q.push({child,level+1});
                vis[child] = true;
            }
        }
    }
    if(!available)
    cout << -1 << endl;
}
int main()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    int src;
    cin >> src;
    bfs(src,11);
    return 0;
}