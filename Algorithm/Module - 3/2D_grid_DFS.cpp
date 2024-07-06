#include <bits/stdc++.h>
using namespace std;
int row,column;
const int N = 20;
char a[N][N];
bool visited[N][N];
vector<pair<int,int>> v = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i,int j)
{
    if(i<0 || i>=row || j<0 || j>=column)
        return false;
    return true;
}
void dfs(int si,int sj)
{
    cout << si << " " << sj << endl;
    visited[si][sj] = true;
    for(int i=0;i<4;i++)
    {
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        if(valid(ci,cj) == true && visited[ci][cj] == false)
        {
            dfs(ci,cj);
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
    dfs(si,sj);
    return 0;
}