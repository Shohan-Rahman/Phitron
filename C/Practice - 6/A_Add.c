#include <stdio.h>
int fun(int x,int y)
{
    int sum = x+y;
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=fun(a,b);
    printf("%d",s);
    return 0;
}