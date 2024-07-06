#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 1,s = k+1,l = n-1;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            cout << "\\";
        }
        for(int j=0;j<n-1;j++)
        {
            cout << " ";
        }
        for(int j=0;j<=l;j++)
        {
            cout << "/";
        }
        cout << endl;
        s--;
    }
    return 0;
}