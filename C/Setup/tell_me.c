#include <stdio.h>
int main()
{
    int l;
    scanf("%d",&l);
    for(int i=0;i<l;i++)
    {
        int n;
    int v=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            v=1;
        }
    }
    if(v=1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }
    return 0;
}
