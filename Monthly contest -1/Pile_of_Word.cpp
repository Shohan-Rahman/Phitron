#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        bool flag = false;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}