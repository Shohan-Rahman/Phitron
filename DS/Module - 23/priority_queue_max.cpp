#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    while(true)
    {
        int c;
        cin >> c;
        if(c == 1)
        {
            int v;
            cin >> v;
            pq.push(v);
        }
        else if(c == 2)
        pq.pop();
        else if(c == 3)
        {
            cout << pq.top() << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}