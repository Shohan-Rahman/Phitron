#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    bool flag = false;              //sorted loop use kore
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag = true;
                break;
            }
        }
    }
    // vector<int> cnt(n+1,0);           //frequency array use kore
    // bool flag = false;
    // for(int i=0;i<n;i++)
    // {
    //     cnt[a[i]]++;
    // }
    // for(int i=0;i<=n;i++)
    // {
    //     if(cnt[i]>1)
    //     {
    //         flag = true;
    //         break;
    //     }
    // }
    if(flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}