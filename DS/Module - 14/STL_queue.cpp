#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int x;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        int v;
        cin >> v;
        q.push(v);
    }
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}