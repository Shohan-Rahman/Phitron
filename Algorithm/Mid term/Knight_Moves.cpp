#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int row,column;
int maze[N][N];
int dis[N][N];
pair<int,int> src,des;
int dr[8] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[8] = {1, -1, 1, -1, 2, -2, -2, 2};
bool vis[N][N];
bool valid(int x,int y) 
{
    return !vis[x][y] && x >= 0 && x < row && y >= 0 && y < column;
}
void bfs(pair<int,int> src)
{
    queue<pair<int,int>> q;
    q.push(src);
    vis[src.first][src.second] = true;
    dis[src.first][src.second] = 0;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        int x = par.first;
        int y = par.second;
        q.pop();
        for(int i=0;i<8;i++) 
        {
            int s1 = x + dr[i];
            int s2 = y + dc[i];
            if(valid(s1,s2)) 
            {
                q.push({s1,s2});
                vis[s1][s2] = true;
                dis[s1][s2] = dis[x][y] + 1;
            }
        }
    }
}
int main() 
{
    int query;
    cin >> query;
    while(query--)
    {
        cin >> row >> column;
        for(int i=0;i<row;i++) 
        {
            for(int j=0;j<column;j++) 
            {
                maze[i][j] = 0;
            }
        }
        int ki,kj,qi,qj;
        cin >> ki >> kj;
        cin >> qi >> qj;
        src = {ki,kj};
        des = {qi,qj};
        memset(vis,false,sizeof(vis));
        memset(dis,-1,sizeof(dis));
        bfs(src);
        if(ki == qi && kj == qj) 
        {
            cout << "0" << endl;
        } 
        else 
        {
            cout << dis[qi][qj] << endl;
        }
    }
    return 0;
}
