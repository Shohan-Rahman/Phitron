#include <stdio.h>
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    int A=a[0];
    int B=a[1];
    int C=a[2];
    for(int i=0;i<3;i++)
    {
        if(a[0]>a[1])
         {
            int tmp=a[0];
            a[0]=a[1];
            a[1]=tmp;
         }
        else if(a[0]>a[2])
         {
            int tmp=a[0];
            a[0]=a[2];
            a[2]=tmp;
         }
        else if(a[1]>a[2])
         {
            int tmp=a[1];
            a[1]=a[2];
            a[2]=tmp;
         }
    }
    for(int i=0;i<3;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    printf("\n");
    printf("%d\n%d\n%d",A,B,C);
    return 0;
}