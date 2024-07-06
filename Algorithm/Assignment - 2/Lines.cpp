#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 40;
int n;
int si, sj, di, dj;
char mat[N][N];
bool vis[N][N];
pair<int,int> path[N][N];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};

bool valid(int ci, int cj) {
    return !vis[ci][cj] && ci >= 0 && ci < n && cj >= 0 && cj < n && mat[ci][cj] != 'O';
}

void bfs(int si, int sj) {
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    
    while(!q.empty()) {
        pair<int,int> par = q.front();
        q.pop();
        mat[par.first][par.second] = '+';
        for(auto mv : d) {
            int ci = par.first + mv.first;
            int cj = par.second + mv.second;
            
            if(valid(ci,cj)) {
                q.push({ci,cj});
                vis[ci][cj] = true;
                path[ci][cj] = {mv.first, mv.second};
            }
        }
        cout << endl;
    }
}

int main() {
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
            
            if(mat[i][j] == '@') {
                si = i;
                sj = j;
            }
            else if(mat[i][j] == 'X') {
                di = i;
                dj = j;
            }
        }
    }
    
    memset(vis, false, sizeof(vis));
    bfs(si, sj);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
        {
            mat[si][sj] = '@';
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}
