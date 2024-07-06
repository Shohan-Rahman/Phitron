#include <bits/stdc++.h>
using namespace std;
vector<int> v[1000];
bool vis[1000];
int parent[1000];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
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
    }
    int query;
    cin >> query;
    while(query--)
    {
        memset(vis,false,sizeof(vis));
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
        {
            cout << "NO" << endl;
        }
        else
        {
            // cout << count << endl;
            if(count <= 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}