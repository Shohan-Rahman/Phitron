#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    char b[1001];
    strcpy(b,a);
    int i=0;
    int j=strlen(b)-1;
    while(i<j)
    {
        char tmp=b[i];
            b[i]=b[j];
            b[j]=tmp;
            i++;
            j--;
    }
    if(strcmp(a,b)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}