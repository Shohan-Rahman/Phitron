#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    while(n--)
    {
        string s;
        getline(cin,s);
        map<string,int> mp;
        stringstream ss(s);
        string word;
        int mx = INT_MIN;
        string ans;
        while(ss>>word)
        {
            mp[word]++;
            if(mp[word] > mx)
            {
                mx = mp[word];
                ans = word;
            }
        }
        cout << ans << " " << mx << endl;
    }
    return 0;
}