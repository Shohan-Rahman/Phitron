#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    int a,b;
    cin >> n >> e;
    vector<int> matrix[n+1];
    while(e--)
    {
        cin >> a >> b;
        matrix[a].push_back(b);
        matrix[b].push_back(a);
    }
    int query;
    cin >> query;
    while(query--)
    {
        int x;
        cin >> x;
        vector<int> v;
        if(matrix[x].size() == 0)
        cout << "-1" << endl;
        else
        {
            for (int i=0;i<matrix[x].size(); i++)
            {
                v.push_back(matrix[x][i]);
            }
            sort(v.begin(),v.end(),greater<int>());
            for(int val:v)
            cout << val << " ";
            cout << endl;
        }
    }
    return 0;
}