#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
    int n,m;
    cin >> n >> m;
    while(n--)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    while(m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flag = true;
    if(s.size() == q.size())
    {
        while(!s.empty())
        {
            if(s.top()!=q.front())
            {
                flag = false;
                break;
            }
            s.pop();
            q.pop();
        }
        if(flag == false)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}