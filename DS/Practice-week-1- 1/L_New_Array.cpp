#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    vector<int> ans;
    ans = b;
    ans.insert(ans.end(),a.begin(),a.end());
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}