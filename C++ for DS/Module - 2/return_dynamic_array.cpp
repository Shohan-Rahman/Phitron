#include <bits/stdc++.h>
using namespace std;
int* fun(int n)
{
    int* a=new int [n];
    for(int i=0;i<n;i++)
    cin >> a[i];
    return a;
}
int main()
{
    int n;
    cin >> n;
    int *s=fun(n);
    for(int i=0;i<n;i++)
    cout << s[i] << " ";
    return 0;
}