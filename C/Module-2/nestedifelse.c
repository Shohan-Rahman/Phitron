#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a >= 5000)
    {
        printf("Cox-Bazar jabo\n");
        if(a >= 10000)
            {
                printf("St martin jabo\n");
            }
        else
        {
            printf("ferot chole jabo");
        }
    }
    else
    {
        printf("kothao jabo na");
    }
    
    return 0;
}