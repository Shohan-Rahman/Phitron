#include <bits/stdc++.h>
using namespace std;
vector<int> v[1000];
bool vis[1000];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        cout << par << endl;
        // for(int i=0;i<v[par].size();i++)
        // {
        //     int child = v[par][i];
        //     if(vis[child] == false)
        //     {
        //         q.push(child);
        //         vis[child] = true;
        //     }
        // }

        for(int child:v[par])
        {
            if(vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
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
    memset(vis,false,sizeof(vis));
    int src;
    cin >> src;
    bfs(src);
    return 0;
}