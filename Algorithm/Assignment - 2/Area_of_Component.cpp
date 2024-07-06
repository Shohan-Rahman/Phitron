#include <bits/stdc++.h>
using namespace std;
int row,column;
const int N = 1000;
char a[N][N];
bool visited[N][N];
vector<pair<int,int>> v = {{0,1},{0,-1},{-1,0},{1,0}};
int cnt = 0;
bool valid(int i,int j)
{
    if(i<0 || i>=row || j<0 || j>=column)
        return false;
    return true;
}
void dfs(int si,int sj)
{
    cnt++;
    visited[si][sj] = true;
    for(int i=0;i<4;i++)
    {
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        if(valid(ci,cj) == true && visited[ci][cj] == false && a[ci][cj] != '-')
        {
            dfs(ci,cj);
        }
    }
}
int main()
{
    vector<int> v;
    cin >> row >> column;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin >> a[i][j];
        }
    }
    memset(visited,false,sizeof(visited));
    int si,sj;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cnt = 0;
            if(a[i][j] == '.' && !visited[i][j])
            {
                si = i;
                sj = j;
                dfs(si,sj);
                v.push_back(cnt);
            }
        }
    }
    int ans = INT_MAX;
    if(v.empty())
    {
        cout << "-1";
    }
    else
    {
        for(int val:v)
        {
            ans = min(ans, val);
        }
        cout << ans;
    }
    return 0;
}