#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<string> a;                  //single string
    // string s;
    // cin >> s;
    // a.push_back(s);
    // for(int i=0;i<a.size();i++)
    // cout << a[i] << " ";


    int n;                           //multiple string
    cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}