#include <bits/stdc++.h>
using namespace std;
vector<int> v[100];
bool vis[100];
vector<int> f;
void dfs(int src)
{
    f.push_back(src);
    vis[src] = true;
    for(int child:v[src])
    {
        if(vis[child] == false)
        {
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
    int src;
    cin >> src;
    dfs(src);
    cout << f.size();
    return 0;
}