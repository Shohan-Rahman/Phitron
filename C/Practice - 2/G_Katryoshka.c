#include <stdio.h>
int main()
{
    long long int e,m,b,i,total=0,max=0;
    scanf("%lld%lld%lld",&e,&m,&b);
    if(e>m&&e>b)
        max=e;
    else if(m>e&&m>b)
        max=m;
    else
        max=b;
    for(int i=1;i<=max;i++)
    {
        if(e>=1&&m>=1&&b>=1)
        {
            total++;
            e=e-1;
            m=m-1;
            b=b-1;
        }
        else if(e>=2&&b>=1)
        {
            total++;
            e=e-2;
            b=b-1;
        }
    }
    printf("%lld",total);
    return 0;
}
