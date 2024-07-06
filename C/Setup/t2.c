#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
    /*if(n>0)
    {
        for(i=1;i<n;i++)
        {
            printf("%d ",i);
        }
    }*/
    if(n<0)
    {
         for(i=0;i<n;i--)
         {
             printf("%d ",i);
         }
    }
    }
    return 0;
}
