#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    int g=1;
    for(int i=1;i<=(n*2)-1;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        if(i%2==0)
        {
        for(int j=1;j<=g;j++)
        {
            printf("-");
        }
        }
        else
        {
        for(int j=1;j<=k;j++)
        {
            printf("#");
        }
        }
        if(i<n)
        {
            k+=2;
            g+=2;
            s--;
        }
        else
        {
            k-=2;
            g-=2;
            s++;
        }
        printf("\n");
    }
    return 0;
}
