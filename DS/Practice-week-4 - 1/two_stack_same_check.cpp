#include <bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    list<int> l;
    void push(int x)
    {
        l.push_back(x);
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
        if(l.size() == 0) return true;
        else return false;
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        st.push(x);
        // while(!st.empty())
        // {
        //     cout << st.top() << endl;
        //     st.pop();
        // }
    }

    myStack mt;
    int k;
    cin >> k;
    while(k--)
    {
        int y;
        cin >> y;
        mt.push(y);
        // while(!mt.empty())
        // {
        //     cout << mt.top() << endl;
        //     mt.pop();
        // }
    }
    bool flag = true;
    if(st.size() == mt.size())
    {
        while(!st.empty())
        {
            if(st.top()!=mt.top())
            {
                flag = false;
                break;
            }
            st.pop();
            mt.pop();
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