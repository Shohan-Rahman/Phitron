#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int v=0;
    for(int i=1;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                v=1;
            }
        }
    }
    if(v==0)
    {
        printf("Nehi mila");
    }
    else
    {
        printf("Milgeya");
    }
    return 0;
}