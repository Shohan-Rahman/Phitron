#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        string s;
        int a;
        char m;
        cin >> a >> m;
        s.resize(a,m);
        for (char c:s)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}