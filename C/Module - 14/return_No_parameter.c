#include <stdio.h>
int sum()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int s=x+y;
    return s;
}
int main()
{
    int s=sum();
    printf("%d",s);
    return 0;
}