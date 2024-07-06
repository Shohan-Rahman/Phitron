#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    int cnt[26] = {0};
    for(int i=0;i<strlen(a);i++)
    {
        int value=a[i]-'a';
        cnt[value]++;
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]!=0)
        {
            printf("%c",i+'a');
        }
    }
    return 0;
}