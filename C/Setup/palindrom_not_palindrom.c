#include <stdio.h>
#include <string.h>
int is_palindrome(char n[])
{
    int st=strlen(n);
    int v=1;
    int i=0,j=st-1;
    while(i<j)
    {
        if(n[i]==n[j])
        {
            i++;
            j--;
        }
        else
        {
            v=0;
            break;
        }
    }
    return v;
}
int main()
{
    char n[1001];
    scanf("%s",n);
    int s=is_palindrome(n);
    if(s==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
