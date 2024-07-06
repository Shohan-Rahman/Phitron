#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x:a)
    cin >> x;
    int m;
    cin >> m;
    vector<int> b(m);
    for(int &y:b)
    cin >> y;
    int x;
    cin >> x;
    a.insert(a.begin()+x,b.begin(),b.end());
    for(int z:a)
    cout << z << " ";
    return 0;
}