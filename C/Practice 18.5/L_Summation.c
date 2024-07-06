#include <stdio.h>
long long int fun(int a[],int n,int i)
{
    if (i==n) return 0;
    return a[i]+fun(a,n,i+1);;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    long long int s=fun(a,n,0);
    printf("%lld",s);
    return 0;
}