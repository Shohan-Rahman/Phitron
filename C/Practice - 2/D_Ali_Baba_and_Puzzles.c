#include <stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d %d %d %d",&a,&b,&c,&n);
    int ans1=a+b*c;
    int ans2=a*b+c;
    int ans3=a*b-c;
    int ans4=a-b*c;
    int ans5=a+b-c;
    int ans6=a-b+c;
    if(ans1==n)
    {
        printf("YES");
    }

    else if(ans2==n)
    {
        printf("YES");
    }
    else if(ans3==n)
    {
        printf("YES");
    }
    else if(ans4==n)
    {
        printf("YES");
    }
    else if(ans5==n)
    {
        printf("YES");
    }
    else if(ans6==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
