#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {60,40,45,35,30,25,20,15,10,5};
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;
        while(cur_idx != 0)
        {
            int par_idx = (cur_idx - 1)/2;
            if(v[par_idx] < v[cur_idx])
            {
                swap(v[par_idx],v[cur_idx]);
            }
            else
            {
                break;
            }
            cur_idx = par_idx;
        }
    }
    for(int val:v)
    cout << val << " ";
    return 0;
}