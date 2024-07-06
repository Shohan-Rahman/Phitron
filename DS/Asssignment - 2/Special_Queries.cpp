#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int n;
    cin >> n;
    while(n--)
    {
        
        int k;
        string s;
        cin >> k;
        if(k == 0)
        {
            cin >> s;
            q.push(s);
        }
        else
        {
            {
                if(q.empty())
                {
                    cout << "Invalid" << endl;
                }
                else
                {
                    cout << q.front() << endl;
                    q.pop();
                }
            }
        }
    }
    return 0;
}