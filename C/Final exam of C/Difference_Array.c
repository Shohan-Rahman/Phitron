#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    int p;
    scanf("%d",&p);
    int a[p];
    for(int i=0;i<p;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[p];
    for(int i=0;i<p;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<p-1;i++)
    {
        for(int j=i+1;j<p;j++)
        {
            if (b[i]>b[j])
            {
                int tmp=b[i];
                b[i]=b[j];
                b[j]=tmp;
            }
        }
    }
    int c[p];
    for(int i=0;i<p;i++)
    {
        c[i]=a[i]-b[i];
        if(c[i]<0)
        {
            c[i]=c[i]*-1;
        }
    }
    for(int i=0;i<p;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
    }
    return 0;
}