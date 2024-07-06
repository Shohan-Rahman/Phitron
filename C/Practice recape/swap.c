#include <stdio.h>
void swap_it(int *p,int *q)
{
    int tmp=*p;
    *p=*q;
    *q=tmp;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap_it(&a,&b);
    printf("%d %d",a,b);
    return 0;
}