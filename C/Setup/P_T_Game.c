#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    // int l=strlen(s);
    int T_count=0;
    int P_count=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='T')
        {
            T_count++;
        }
        else if(s[i]=='P')
        {
            P_count++;
        }
    }
    if(T_count>P_count)
    {
        printf("Tiger");
    }
    else if(T_count<P_count)
    {
        printf("Pathaan");
    }
    else
    {
        printf("Draw");
    }
    // printf("%d %d",T_count,P_count);
    return 0;
}
