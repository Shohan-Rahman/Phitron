#include <bits/stdc++.h>
using namespace std;
int row,column;
const int N = 1000;
int maze[N][N];
pair<int,int> src,des;
int dr[4] = {0,0,-1,1};
int dc[4] = {1,-1,0,0};
int vis[N][N];
bool valid(int x,int y)
{
    return !vis[x][y] && maze[x][y] != -1 && x >= 0 && x < row && y >= 0 && y < column;
}
void bfs(pair<int,int> src)
{
    queue<pair<int,int>> q;
    q.push(src);
    vis[src.first][src.second] = true;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        int x = par.first;
        int y = par.second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int s1 = x + dr[i];
            int s2 = y + dc[i];
            if(valid(s1,s2))
            {
                q.push({s1,s2});
                vis[s1][s2] = true;
            }
        }
    }
}
int main()
{
    cin >> row >> column;
    for(int i=0;i<row;i++)
    {
        string s;
        cin >> s;
        for(int j=0;j<column;j++)
        {
            if(s[j] == '-')
            {
                maze[i][j] = -1;
            }
        }
    }
    int si,sj,di,dj;
    cin >> si >> sj;
    cin >> di >> dj;
    pair<int,int> src = {si,sj};
    pair<int,int> des = {di,dj};
    bfs(src);
    if(vis[des.first][des.second] == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}