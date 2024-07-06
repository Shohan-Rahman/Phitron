#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int pl=1;
    int l=0,r=strlen(a)-1;
    while(l<r)
    {
        if(a[l]!=a[r])
        {

            pl=0;
            break;
        }
        l++;
        r--;
    }

    if(pl=1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
