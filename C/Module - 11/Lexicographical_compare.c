#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    // int v=strcmp(a,b);   //shortcut   
    // printf("%d",v);      //shortcut
    int i=0;
    while(1)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("same\n");
            break;
        }
        if(a[i]=='\0')
        {
            printf("A choto\n");
            break;
        }
        if(b[i]=='\0')
        {
            printf("B choto\n");
            break;
        }
        if(a[i]==b[i])
        {
            i++;
        }
        else if(a[i]<b[i])
        {
            printf("A choto\n");
            break;
        }
        else
        {
            printf("B choto\n");
            break;
        }
    }
    return 0;
}