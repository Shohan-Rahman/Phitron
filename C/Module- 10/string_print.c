#include <stdio.h>
int main()
{
    char a[]="Shohan";
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",a);
    return 0;
}