#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    ss>>word;
    for(auto i=(word.end()-1);i>=word.begin();i--)
    {
        cout << *i;
    }
    while(ss>>word)
    {
        cout << " ";
        for(auto i=(word.end()-1);i>=word.begin();i--)
        {
            cout << *i;
        }
    }
    return 0;
}