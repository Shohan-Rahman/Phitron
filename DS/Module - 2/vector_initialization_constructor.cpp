#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;               //type - 1
    // cout << v.size() << endl;

    // vector<int> v(5);                  //type - 2
    // cout << v.size() << endl;

    // vector<int> v(5,10);                     //type - 3
    // for(int i=0;i<v.size();i++)
    // {
    //     cout << v[i] << " ";
    // }

    // vector<int> v(10,5);                           //type - 4
    // vector<int> v2(v);
    // for(int i=0;i<v.size();i++)
    // {
    //     cout << v[i] << " ";
    // }

    int a[6] = {10,20,30,40,50,60};                      //type - 5
    vector<int> v(a,a+6);
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}