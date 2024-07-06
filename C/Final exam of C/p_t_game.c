#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
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
            printf("Tiger\n");
        }
        else if(T_count<P_count)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}