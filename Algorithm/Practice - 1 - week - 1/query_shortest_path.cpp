#include <bits/stdc++.h>
using namespace std;
vector<int> v[1000];
bool vis[1000];
int level[1000];
int parent[1000];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child:v[par])
        {
            if(vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
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
    int query;
    cin >> query;
    while(query--)
    {
        memset(vis,false,sizeof(vis));
        memset(level,-1,sizeof(level));
        memset(parent,-1,sizeof(parent));
        int src,des;
        cin >> src >> des;
        bfs(src);
        vector<int> path;
        int x = des;
        int count = 0;
        while(x != -1)
        {
            path.push_back(x);
            x = parent[x];
            count++;
        }
        if(vis[des] == false)
        cout << "-1" << endl;
        else
        cout << count-1 << endl;
    }
    return 0;
}