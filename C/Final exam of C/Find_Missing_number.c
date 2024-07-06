#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
    long long int a[4];
    for(int i=0;i<4;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int m=a[1]*a[2]*a[3];
    if(a[0]%m==0)
    {
        long long int v=a[0]/m;
        printf("%lld\n",v);
    }
    else if(a[0]%m!=0)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }
    }
    return 0;
}