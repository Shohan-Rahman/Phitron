#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        int val;
        int mn=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                val=a[i]+a[j]+j-i;
                mn=min(mn,val);
            }
        }
        cout << mn << endl;
    }
    return 0;
}