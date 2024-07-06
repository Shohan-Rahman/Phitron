#include <stdio.h>
#include <string.h>
int main()
{
    char a[10001];
    scanf("%s",a);
    int cnt[26]={0};
    int st=strlen(a);
    for(int i=0;i<st;i++)
    {
        int v=a[i]-'a';
        cnt[v]++;
    }
    for(int i=0;i<26;i++)
    {
        int v=a[i]-'a';
        if(cnt[v]!=0)
        {
            printf("%c - %d\n",i+'a',cnt[i]);
        }
        cnt[v]=0;
    }
    return 0;
}