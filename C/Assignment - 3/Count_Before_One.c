#include <stdio.h>
int count_before_one (int ar[],int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(ar[i]!=1)
        {
            count++;
        }
        else
        {
            break;
        }

    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int sz=sizeof(ar)/sizeof(int);
    int s=count_before_one(ar,sz);
    printf("%d",s);
    return 0;
}
