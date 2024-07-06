#include <bits/stdc++.h>
using namespace std;
class stu
{
public:
string name;
int age;
int marks;
};
int main()
{
    int n;
    cin>>n;
    stu a[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin >> a[i].age >> a[i].marks;
    }
    stu mn;               //minimum
    mn.marks = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i].marks < mn.marks)
        {
            mn=a[i];            //mn object e a[i] object ti rakhte hobe...pura object print er jonno
        }
    }
    cout << mn.name << " " << mn.age << " " << mn.marks << endl;
    stu mx;                       //maximum
    mx.marks = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i].marks > mx.marks)
        {
            mx=a[i];
        }
    }
    cout << mx.name << " " << mx.age << " " << mx.marks << endl;
    return 0;
}