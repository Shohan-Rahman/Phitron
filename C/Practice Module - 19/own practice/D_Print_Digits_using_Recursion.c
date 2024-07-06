// #include <stdio.h>     //do-while use kore digit
// int main()
// {
//     int k;
//     scanf("%d",&k);
//     for(int i=0;i<k;i++)
//     {
//     int n;
//     scanf("%d",&n);
//     do
//     {
//         int ans=n%10;
//         printf("%d ",ans);
//         n=n/10;
//     }
//     while(n!=0);
//     printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
void fun(int n)
{
    if(n==0) return;
    int ans=n%10;
    fun(n/10);
    printf("%d ",ans);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int k;
        scanf("%d",&k);
        fun(k);
        if(k==0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}