#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    int s;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<q;i++)
    {
        cin >> s;
        auto it = find(a.begin(),a.end(),s);
        if(it!=a.end())
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}