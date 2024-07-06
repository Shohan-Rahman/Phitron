#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // cin >> s;
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // cout << s.capacity() << endl;

    // string a = "ss";
    // cout << a.capacity() << endl; 
    // string a="ssssssssssssssssssssssssssssssssssssssssssssssssssss";
    // cout << a.capacity() << endl;

    // string s;
    // cin >> s;
    // cout << s << endl;
    // s.clear();
    // cout << s << endl << s.size() <<endl;

    // string s;
    // cin >> s;
    // if(s.empty()) cout << "Empty";
    // else cout << "Not Empty";

    string a;
    cin >> a;
    cout << a.size() << endl;
    a.resize(6);
    cout << a << endl;
    // a.resize(10);
    // cout << a << endl;
    a.resize(10,'$');
    cout << a << endl;
    return 0;
}