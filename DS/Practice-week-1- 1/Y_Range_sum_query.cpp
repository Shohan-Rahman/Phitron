#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    int l,r;
    vector<int> a(n);
    // int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<q;i++)
    {
        int sum = 0;
        cin >> l >> r;
        for(int j=l-1;j<=r-1;j++)
        {
            sum=sum+a[j];
        }
        // cout << endl;
        cout << sum << endl;
    }
    return 0;
}