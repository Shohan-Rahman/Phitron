#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p=6+(n-1)/2;
    int k=1;
    int s=p-1;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf(" ");
        }
        for(int j=0;j<k;j++)
        {
            printf("*");
        }
        k+=2;
        s--;
        printf("\n");
    }
    for(int i=p+1;i<p+6;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf(" ");
        }
        for(int j=0;j<n;j++)
        {
            printf("*");
        }
        k=n;
        s=5;
        printf("\n");
    }
    return 0;
}
