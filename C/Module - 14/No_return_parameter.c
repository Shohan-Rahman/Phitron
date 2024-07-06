#include <stdio.h>
void sum(int x,int y)
{
    int s=x+y;
    printf("%d",s);
}
int main()
{
    int x,y; //int a,b;
    scanf("%d %d",&x,&y);  //scanf("%d %d",&a,&b);
    sum(x,y);  //sum(a,b);
    return 0;
}