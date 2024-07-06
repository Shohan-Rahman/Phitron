#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a,b;
    int flag = 0;
    cin >> a >> b;
    int s[a];
    for(int i=0;i<a;i++)
    {
        cin >> s[i];
    }
    for(int i=0;i<a-2;i++)
    {
        for(int j=i+1;j<a-1;j++)
        {
            for(int k=j+1;k<a;k++)
            {
                if(s[i]+s[j]+s[k]==b)
                {
                    flag = 1;
                }
            }
        }
    }
    if(flag==1)
    cout << "YES" <<endl;
    else
    cout << "NO" <<endl;
    }
    return 0;
}