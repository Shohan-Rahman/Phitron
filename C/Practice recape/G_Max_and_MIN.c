#include <stdio.h>
void fun(int n)
{
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        {
            int tmp=a[i];
            a[i]=min;
            min=tmp;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        {
            int tmp=a[i];
            a[i]=max;
            max=tmp;
        }
    }
    printf("%d %d",min,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}
