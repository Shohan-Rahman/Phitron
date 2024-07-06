#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s",s);
    int len=strlen(s);
    int value=0;
    int i=0;
    for(i=0;i<len;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            value++;
        }
    }
    int con=len-value;
    printf("%d\n",con);
    return 0;
}
