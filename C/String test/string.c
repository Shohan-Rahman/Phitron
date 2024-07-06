#include <stdio.h>
#include<string.h>
int main()
{
    char a[27];
    fgets(a,26,stdin);
    a[25]='\0';
    // gets(a);
    // char a[7]={'S','h','o','h','a','n'}; //no garuntee
    // char a[7]="Shohan"; //garuntee
    // char a[7]="Shohan\0";
    // fgets(a,7,stdin);
    // gets(a);
    // scanf("%s",&a);
    // int sz=sizeof(a)/sizeof(char);
    // printf("%d\n",sz);
    printf("%s\n",a);
    
    return 0;
}