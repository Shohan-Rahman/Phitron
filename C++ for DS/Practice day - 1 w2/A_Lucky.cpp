#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        string a;
        cin >> a;
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<a.size()/2;i++)
        {
            sum1=sum1+(a[i]-'0');
        }
        for(int i=a.size()/2;i<a.size();i++)
        {
            sum2=sum2+(a[i]-'0');
        }
        if(sum1==sum2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}