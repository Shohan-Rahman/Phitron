#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s = 0;
    int k = (n*2)-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=k;j>=1;j--)
        {
            printf("*");
        }
        k-=2;
        s++;
        printf("\n");
    }
    return 0;
}