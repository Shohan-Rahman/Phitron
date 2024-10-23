#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    int p,q,r,s = 0;
    int ans = 0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j] == 1)
            {
                if(i==2 && j==2)
                {
                    ans = 0;
                }
                if(i>2)
                {
                    p = i-2;
                    ans = ans + p;
                }
                else if(i<2)
                {
                    q = 2-i;
                    ans = ans + q;
                }
                if(j>2)
                {
                    r = j-2;
                    ans = ans + r;
                }
                else if(j<2)
                {
                    s = 2-j;
                    ans = ans + s;
                }
            }
        }
    }
    cout << ans;
    return 0;
}