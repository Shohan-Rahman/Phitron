#include <stdio.h>
#include <string.h>
void fun(int n)
{
    char space[5]="";
    for(int i=1;i<=n;i++)
    {
        printf("%s%d",space,i);
        if(i==1)
        {
            strcpy(space," ");
        } 
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}