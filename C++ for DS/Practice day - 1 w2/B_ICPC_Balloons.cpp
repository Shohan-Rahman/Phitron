#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int cnt[26]={0};
        int sum=0;
        int value;
        for(int i=0;i<s.size();i++)
        {
            value = s[i] - 'A';
            cnt[value]++;
        }
        for(int i=0;i<26;i++)
        {
            if(cnt[i]!=0)
            {
                if(cnt[i]>0)
                {
                    cnt[i]++;
                }
            sum=sum+cnt[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}