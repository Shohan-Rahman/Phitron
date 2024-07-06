#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,a;
    cin >> m >> n >> a;
    long long int t = m/a + (m%a != 0);
    long long int s = n/a + (n%a != 0);
    cout << t*s;
    return 0;
}