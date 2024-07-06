#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='0' && a<='9')
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if(a>='a' && a<='z')
        {
            printf("IS SMALL");
        }
        else
        {
            printf("IS CAPITAL");
        }
    }
    return 0;
}