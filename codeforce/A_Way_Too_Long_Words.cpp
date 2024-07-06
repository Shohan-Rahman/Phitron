#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s.size()<=10)
        {
            cout << s << endl;
        }
        else
        {
            cout << *s.begin() << s.size()-2 << *(s.end()-1) << endl;
        }
    }
    return 0;
}