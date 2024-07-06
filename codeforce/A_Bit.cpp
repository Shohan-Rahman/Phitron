#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 0;
    for(int i=0;i<n;i++)
    {
        char a,b,c;
        cin >> a >> b >> c;
        if(a == '+' || c == '+')
        {
            s++;
        }
        if(a == '-' || c == '-')
        {
            s--;
        }
    }
    cout << s;
    return 0;
}