#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        stack<char> st;
        string s;
        cin >> s;
        for(char c:s)
        {
            if(c == '0')
            {
                st.push(c);
            }
            else if(c == '1' && !st.empty() && st.top() == '0')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        if(st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}