#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q,op;
    cin >> q;
    vector<int> v[100005];
    vector<int> v2[100005];
    vector<int> v3[100005];
    memset(v,0,sizeof(v));
    memset(v2,0,sizeof(v));
    memset(v3,0,sizeof(v));
    int mn;
    while(q--)
    {
        cin >> op;
        if(op == 1)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if(op == 2)
        {
            for(int val:v)
            {
                if(val%2==0)
                {
                    mn = 0;
                    v2.push_back(val);
                    mn = min(v2.begin(),v2.end());
                    cout << mn << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                    break;
                }
            }
        }
        if(op == 3)
        {
            for(int val:v)
            {
                if(val%2!=0)
                {
                    mn = 0;
                    v3.push_back(val);
                    mn = min(v3.begin(),v3.end());
                    cout << mn << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}