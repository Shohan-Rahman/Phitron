#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // for(int i=0;i<s.size();i++)
    // {
    //     cout << s[i] << endl;
    // }

    cout << *s.begin() << endl;
    cout << *s.end() << endl;
    cout << *(s.end()-1) << endl;

    // string:: iterator a;
    // for(a=s.begin();a<s.end();a++)
    // {
    //     cout << *a << endl;
    // }

                //or

    // for(string:: iterator a = s.begin();a < s.end();a++)
    // {
    //     cout << *a <<endl;
    // }

                //or
                
    for(auto a=s.begin();a<s.end();a++)
    {
        cout << *a << endl;
    }
    return 0;
}