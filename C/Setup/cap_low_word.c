#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000001];
    fgets(a,100,stdin);
    int i;
    char k=',';
    for(i=0;i<strlen(a);i++)
    {
    if(a[i]==k)
    {
        a[i]=' ';
    }
    if(a[i]>='a'&&a[i]<='z')
    {
        a[i]=a[i]-32;
    }
    else if(a[i]>='A'&&a[i]<='Z')
    {
        a[i]=a[i]+32;

    }
    }
    printf("%s\n",a);


    return 0;
}
