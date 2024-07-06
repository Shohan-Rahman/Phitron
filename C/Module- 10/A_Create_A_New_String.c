#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    char b[1001];
    scanf("%s",b);
    int at=strlen(a);
    int bt=strlen(b);
    printf("%d %d\n",at,bt);
    printf("%s %s\n",a,b);
    return 0;
}