#include <stdio.h>
int my_abs(int n)
{
    if(n<0)
    {
        int ans=n*(-1);
        return ans;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans=my_abs(n);
    printf("%d",ans);
    return 0;
}