#include <bits/stdc++.h>
using namespace std;
class myQueue
{
    public:
    list<int> l;
    void push(int v)
    {
        l.push_back(v);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myQueue q;
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