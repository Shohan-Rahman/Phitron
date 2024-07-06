#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* a = new int [n];
    int* b = new int [n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    delete[] a;
    int s;
    cin >> s;
    a = new int [s];
    for(int i=0;i<n;i++)
    a[i]=b[i];
    delete[] b;
    // a[s-1] = 40;
    // a[s-2] = 50;
    for(int i=s-1;i>=n;i--)
    cin >> a[i];
    for(int i=0;i<s;i++)
    cout<<a[i]<<" ";
    delete[] a;
    return 0;
}