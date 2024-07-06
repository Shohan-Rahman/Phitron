#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt[26]={0};
    for(char c:s)
    {
        cnt[c-'a']++;
    }
    for(char i='a';i<'z';i++)
    {
        for(int j=0;j<cnt[i-'a'];j++)
        {
            cout << i;
        }
    }
    return 0;
}