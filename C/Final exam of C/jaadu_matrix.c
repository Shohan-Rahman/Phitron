#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int flag = 1;
    int a[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(m!=n)
    {
        flag = 0;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||i+j==m-1)
            {
                if(a[i][j]!=1)
                {
                    flag = 0;
                }
                continue;
            }
            if(a[i][j]!=0)
            {
                flag = 0;
            }
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}