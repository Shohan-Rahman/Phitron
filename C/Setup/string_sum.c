#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    int sum=0,v;
    for(int i=0;i<n;i++)
    {
        v=a[i]-'0';
        sum=sum+v;
    }
    printf("%d\n",sum);


    return 0;
}
