#include <stdio.h>
int main()
{
    long long int n,sum;
    scanf("%lld",&n);
    sum=0;
    long long int ar[n];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);

        sum=sum+ar[i];

    }
    if(sum<0)
    {
        sum=sum*(-1);
    }
    printf("%lld",sum);
    return 0;
}
