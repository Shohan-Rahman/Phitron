#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000000];
    fgets(a,1000001,stdin);
    int i=0;
    while(a[i]!='\\')
    {
        printf("%c",a[i]);
        i++;
    }
    
    // for(int i=0;a[i]!='\\';i++)
    // {
    //     printf("%c",a[i]);
    // }
    
    return 0;
}