#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1=sum1+a[i][j];
            }
            if(i+j==n-1)
            {
                sum2=sum2+a[i][j];
            }
        }
    }
    int dif=sum1-sum2;
    if(dif<0)
    {
        dif=dif*-1;
    }
    printf("%d",dif);
    return 0;
}