#include <stdio.h>
#include <string.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",a,b);
    int sta=strlen(a);
    int stb=strlen(b);
    printf("%d %d\n",sta,stb);
    // for(int i=0;i<=strlen(b);i++)
    // {
    //     a[sta]=b[i];
    //     stb++;
    // }
    printf("%s%s\n",a,b);
    char tmp=0;
    tmp=a[0];
    a[0]=b[0];
    b[0]=tmp;
    printf("%s %s",a,b);
    return 0;
}