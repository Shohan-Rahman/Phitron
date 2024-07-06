#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int l=(n*2)-1;
    int s=n-1;
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=l;j>=1;j--)
        {
            printf("*");
        }
        s++;
        l=l-2;
        printf("\n");
    }
    return 0;
}