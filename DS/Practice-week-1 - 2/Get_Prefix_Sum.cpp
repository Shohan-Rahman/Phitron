#include <bits/stdc++.h>
using namespace std;
void fun(long long int pre[],long long int n,long long int i)
{
    if(i==n) return;
    fun(pre,n,i+1);
    cout << pre[i] << " ";
}
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    long long int pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    fun(pre,n,0);
    return 0;
}