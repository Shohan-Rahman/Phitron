#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
char mat[N][N];
int n,m;
int si,sj,di,dj;
bool vis[N][N];
pair<int, int> parent[N][N];
pair<int,int> path[N][N];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int ci,int cj)
{
    return (!vis[ci][cj]) && (ci>=0) && (ci < n) && (cj>=0) && (cj < m);
}
void bfs(int si,int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        int x = par.first;
        int y = par.second;
        q.pop();
        for(auto mv:d)
        {
            int ci = x+mv.first;
            int cj = y+mv.second;
            if(valid(ci,cj))
            {
                vis[ci][cj] = true;
                path[ci][cj] = {mv.first,mv.second};
                parent[ci][cj] = {x,y};
                q.push({ci,cj});
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> mat[i][j];
            path[i][j] = {-1,-1};
            if(mat[i][j] == '#')
            {
                vis[i][j] = true;
            }
            if(mat[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if(mat[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis,false,sizeof(vis));
    bfs(si,sj);
    vector<pair<int,int>> ans;
    pair<int, int> par;
    while(di != si || dj != sj)
    {
        ans.push_back({path[di][dj]});
        par = parent[di][dj];
        mat[di][dj] = 'X';
        di -= ans.back().first;
        dj -= ans.back().second;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}