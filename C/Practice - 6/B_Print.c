#include <stdio.h>
void fun(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    fun(a);
    return 0;
}