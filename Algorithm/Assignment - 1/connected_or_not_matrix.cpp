#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    int matrix[n][n];
    memset(matrix,0,sizeof(matrix));
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        matrix[a][b] = 1;
    }
    int query;
    cin >> query;
    while(query--)
    {
        int x,y;
        cin >> x >> y;
        if(x == y)
        {
            cout << "YES" << endl;
        }
        else
        {
            if(matrix[x][y] == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}