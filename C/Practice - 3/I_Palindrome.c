#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int pl=0;
    int st=strlen(a);
    // if(st==1)
    // {
    //     pl=1;
    // }
    int i=0,j=st-1;
    while(i<j)
    {
        if(a[i]==a[j])
        {
            pl=1;
            i++;
            j--;
        }
        else
        {
            pl=0;
            break;
        }
    }
    if(pl==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}