#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    // scanf("%s",&a);
    fgets(a,40,stdin);
    int st=strlen(a);
    // int count=0;
    // int i=0;
    // while(a[i]!=0)
    // {
    //     count++;
    //     i++;
    // }
    // for(int i=0;a[i]!='\0';i++)
    // {
    //     count ++;
    // }
    // printf("%d",count);
    printf("%d",st);
    return 0;
}