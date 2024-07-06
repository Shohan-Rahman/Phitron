#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    long long sum=0;
    for(int i=2;i<=y;i+=2)
    {
        long long int add = pow(x,i);
        sum = sum + add;
    }
    cout<<sum<<endl;
    return 0;
}