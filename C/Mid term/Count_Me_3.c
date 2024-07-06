#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char a[10001];
    scanf("%s",a);
    int a_len=strlen(a);
    int capital=0,small=0,digit=0;
    for(int i=0;i<a_len;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            capital++;
        }
        if(a[i]>='a'&&a[i]<='z')
        {
            small++;
        }
        if(a[i]>='0'&&a[i]<='9')
        {
            digit++;
        }
    }
    printf("%d %d %d\n",capital,small,digit);
    }
    return 0;
}
