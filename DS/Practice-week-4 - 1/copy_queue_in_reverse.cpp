#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q1;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        q1.push(x);
    }
    stack<int> s;
    while(!q1.empty())
    {
        int k = q1.front();
        q1.pop();
        s.push(k);
    }
    queue<int> q2;
    while(!s.empty())
    {
        int l = s.top();
        s.pop();
        q2.push(l);
    }
    while(!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }
    return 0;
}