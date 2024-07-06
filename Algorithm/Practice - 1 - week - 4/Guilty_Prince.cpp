#include <bits/stdc++.h>
using namespace std;
int n,m;
char mat[25][25];
bool vis[25][25];
int cnt;
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int ci,int cj)
{
    if(ci>=0 && ci<n && cj>=0 && cj<m) return true;
    else return false;
}
void dfs(int si,int sj)
{
    cnt++;
    vis[si][sj] = true;
    for(int i=0;i<4;i++)
    {
        int ci = si+d[i].first;
        int cj = sj+d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && mat[ci][cj] == '.')
        {
            dfs(ci,cj);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    int cs = 1;
    while(t--)
    {
        int si,sj;
        cin >> m >> n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> mat[i][j];
                if(mat[i][j] == '@')
                {
                    si = i;
                    sj = j;
                }
            }
        }
        memset(vis,false,sizeof(vis));
        cnt = 0;
        dfs(si,sj);
        cout << "Case" << " " << cs++ << ":" << " " << cnt << endl;
    }
    return 0;
}