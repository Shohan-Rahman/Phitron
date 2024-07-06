#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
int parent[N];
bool ans;
void dfs(int src)
{
    // cout << src << " ";
    vis[src] = true;
    for(int child:v[src])
    {
        if(vis[child] == true && child != parent[src])
        {
            ans = true;
            // cout << src << " " << child << " " << parent[src] << endl;
        }
        if(!vis[child])
        {
            parent[child] = src;
            dfs(child);
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
    memset(parent,-1,sizeof(parent));
    ans = false;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    if(ans) cout << "Cycle Detected";
    else cout << "Cycle Not Detected";
    return 0;
}