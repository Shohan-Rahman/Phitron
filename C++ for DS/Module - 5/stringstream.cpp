#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
        //or
    // stringstream ss;
    // ss << s;
    string word;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;

    int cnt = 0;
    while (ss>>word)
    {
        cnt++;
    }
    cout << cnt << endl;
    
    while (ss>>word)
    {
        cout << word <<endl;
    }
    return 0;
}