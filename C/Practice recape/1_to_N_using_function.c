#include <stdio.h>
void fun(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i==n+1)
        {
            break;
        }
        else
        {
            printf("%d ",i);
        }
        
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}