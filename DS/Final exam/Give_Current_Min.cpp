#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    int a;
    cin >> a;
    while(a--)
    {
        int v;
        cin >> v;
        pq.push(v);
    }
    int query;
    cin >> query;
    while(query--)
    {
        int c;
        cin >> c;
        if(c == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if(c == 1)
        {
            if(pq.empty())
            cout << "Empty" << endl;
            else cout << pq.top() << endl;
        }
        else if(c == 2)
        {
            if(!pq.empty()) 
            pq.pop();
            if(pq.empty())
            cout << "Empty" << endl;
            else cout << pq.top() << endl;
        }
    }
    return 0;
}