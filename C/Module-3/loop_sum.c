#include <stdio.h>
int main()
{
    int i;
    long long int sum=0;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%lld\n",sum);
    return 0;
}