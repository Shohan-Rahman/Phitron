#include <bits/stdc++.h>
using namespace std;
int row,column;
const int N = 20;
char a[N][N];
bool visited[N][N];
int flag = false;
vector<pair<int,int>> v = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i,int j)
{
    if(i<0 || i>=row || j<0 || j>=column)
        return false;
    return true;
}
void dfs(int si,int sj)
{
    if(a[si][sj] == 'B')
    flag = true;
    visited[si][sj] = true;
    for(int i=0;i<4;i++)
    {
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        if(valid(ci,cj) == true && visited[ci][cj] == false && a[ci][cj] != '#')
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
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(a[i][j]=='A')
            {
                si = i;
                sj = j;
            }
        }
    }
    memset(visited,false,sizeof(visited));
    dfs(si,sj);
    if(flag == true)
    cout << "Yes";
    else
    cout << "No";
    return 0;
}