#include <bits/stdc++.h>
using namespace std;
int main()
{
       int n;
       scanf("%d",&n);
       int * a = new int[n];
       int * b = new int[n];
       for(int i=0;i<n;i++)
       {
            cin >> a[i];
       }
       for(int i=0;i<n;i++)
       {
            b[i]=a[i];
       }
       delete[] a;
       int m;
       scanf("%d",&m);
       a = new int[m];
       for(int i=0;i<n;i++)
       {
            a[i]=b[i];
       }
       delete[] b;
       for(int i=n;i<m;i++)
       {
            cin >> a[i];
       }
       for(int i=0;i<m;i++)
       {
            cout << a[i] << " ";
       }
    return 0;
}