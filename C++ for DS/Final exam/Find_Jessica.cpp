#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline (cin,a);
    string b = "Jessica";
    stringstream X(a);
    string word;
    bool found = false;
    while(X>>word)
    {
        if (word == b)
        {
            found = true;
            break;
        }
        else
        {
            found = false;
        }
    }
    if(found == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}