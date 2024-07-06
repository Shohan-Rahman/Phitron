#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int ans=0,ans1=0,ans2=0,final_ans=0;
        ans=m1*d;
        ans1=m1+m2;
        ans2=ans/ans1;
        final_ans=d-ans2;
        printf("%d\n",final_ans);
    }
    return 0;
}
