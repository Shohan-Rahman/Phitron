#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    // while(!s.empty())
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    // }

    queue<int> q;
    int m;
    cin >> m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }
    // while(!q.empty())
    // {
    //     cout << q.front() << endl;
    //     q.pop();
    // }
    bool flag = true;
    if(s.size() == q.size())
    {
        while(!s.empty())
        {
            if(s.top() != q.front())
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