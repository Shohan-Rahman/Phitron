#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> v[N];
bool vis[N];
bool path[N];
bool ans;
void dfs(int src)
{
    vis[src] = true;
    path[src] = true;
    for(int child:v[src])
    {
        if(path[child] == true)
        {
            ans = true;
        }
        if(!vis[child])
        {
            dfs(child);
        }
    }
    path[src] = false;
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
    memset(vis,false,sizeof(vis));
    memset(path,false,sizeof(path));
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