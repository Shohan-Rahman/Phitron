#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int even = 0;
        int odd = 0;
        if(n%2==0)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]%2==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
        }
        else
        {
            cout << "-1" << endl;
        }
        if(n/2==even && n/2==odd)
        {
            cout << "0" << endl;
        }
        if(n/2<even)
        {
            cout << even - n/2 << endl; 
        }
        if(n/2<odd)
        {
            cout << odd - n/2 << endl;
        }
    }
    return 0;
}