#include <stdio.h>
#include <string.h>
int main()
{
    char a[21],b[21];
    scanf("%s %s",a,b);
    int value=strcmp(a,b);
    if(value<0)
    {
        printf("%s",a);
    }
    if(value>0)
    {
        printf("%s",b);
    }
    if(value==0)
    {
        printf("%s",a);
    }
    
    return 0;
}