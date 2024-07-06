#include <bits/stdc++.h>
using namespace std;
vector<int> v[1000];
bool vis[1000];
int level[1000];
void bfs(int src,int floor)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    vector<int> v1;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        if(level[par] == floor)
        {
            v1.push_back(par);
        }
        for(int child:v[par])
        {
            if(vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
    sort(v1.begin(),v1.end(),greater<int>());
    for(int val:v1)
    cout << val << " ";
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
    memset(level,-1,sizeof(level));
    int floor;
    cin >> floor;
    bfs(0,floor);
    return 0;
}