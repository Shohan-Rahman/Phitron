#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s1;
    stack<int> s2;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }
    while(!s1.empty())
    {
        int k = s1.top();
        s1.pop();
        s2.push(k);
    }
    while(!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    return 0;
}