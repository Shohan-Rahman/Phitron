#include <bits/stdc++.h>
using namespace std;
int row,column;
const int N = 20;
char a[N][N];
bool visited[N][N];
int dis[N][N];
vector<pair<int,int>> v = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i,int j)
{
    if(i<0 || i>=row || j<0 || j>=column)
        return false;
    return true;
}
void bfs(int si,int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    visited[si][sj] = true;
    dis[si][sj] = 0;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        int s = par.first;
        int t = par.second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int ci = s + v[i].first;
            int cj = t + v[i].second;
            if(valid(ci,cj) == true && visited[ci][cj] == false)
            {
                q.push({ci,cj});
                visited[ci][cj] = true;
                dis[ci][cj] = dis[s][t] + 1;
            }
        }
    }
}
int main()
{
    cin >> row >> column;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin >> a[i][j];
        }
    }
    int si,sj;
    cin >> si >> sj;
    memset(visited,false,sizeof(visited));
    memset(dis,-1,sizeof(dis));
    bfs(si,sj);
    cout << dis[0][0];
    return 0;
}