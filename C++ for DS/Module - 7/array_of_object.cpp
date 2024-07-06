#include <bits/stdc++.h>
using namespace std;
class stu
{
public:
string name;
int cls;
int roll;
};
int main()
{
    int n;
    cin >> n;
    stu a[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin >> a[i].cls >> a[i].roll;
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i].name << a[i].cls << a[i].roll << endl;
    }
    return 0;
}