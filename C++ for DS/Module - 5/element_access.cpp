#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;                                     //0 or front index
    cin >> s;
    cout << s[0] << endl;
    cout << s.at(0) << " " << s.at(5) << endl;
    cout << s.front() << endl;

    cout << s[s.size()-1] << endl;                 //last index
    cout << s.back() << endl;
    return 0;
}