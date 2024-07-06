#include <bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if(l.size()==0) return true;
        else return false;
    }
};
class myQueue
{
    public:
    list<int> l;
    void pushQ(int v)
    {
        l.push_back(v);
    }
    void popQ()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int sizeQ()
    {
        return l.size();
    }
    bool emptyQ()
    {
        return l.empty();
    }
};
int main()
{
    myStack s;
    myQueue q;
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    for(int i=0;i<m;i++)
    {
        int v;
        cin >> v;
        q.pushQ(v);
    }

    bool flag = true;
    if(s.size() == q.sizeQ())
    {
        while(!s.empty())
        {
            if(s.top()!=q.front())
            {
                flag = false;
                break;
            }
            s.pop();
            q.popQ();
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