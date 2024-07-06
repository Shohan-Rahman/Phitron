#include <bits/stdc++.h>
using namespace std;
class stu
{
public:
string name;
int roll;
int marks;
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
        cin >> a[i].roll >> a[i].marks;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].marks > a[j].marks)
            {
                swap(a[i],a[j]);
            }
            else if(a[i].marks == a[j].marks)
            {
                if(a[i].roll > a[j].roll)
                {
                    swap(a[i],a[j]);
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}