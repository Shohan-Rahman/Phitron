#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int n=a%10;
    a=a/10;
    if(n%a==0 || a%n==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
