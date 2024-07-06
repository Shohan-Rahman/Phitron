#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int mn=INT_MAX,min_idx=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<mn)
        {
            mn=a[i];
            min_idx=i;
        }
    }
    int mx=INT_MIN,max_idx=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            max_idx=i;
        }
    }
    int i=min_idx,j=max_idx;
        int tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
