#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int row=m-1;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[row][i]);
    }
    printf("\n");
    int column=n-1;
    for(int i=0;i<m;i++)
    {
        printf("%d ",a[i][column]);
    }
    return 0;
}