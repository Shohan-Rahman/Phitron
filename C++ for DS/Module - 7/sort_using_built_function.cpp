#include <bits/stdc++.h>
using namespace std;
class stu
{
    public:
    string name;
    int roll;
    int marks;
};
bool sajao(stu a,stu b)
{
    // if(a.marks <= b.marks)      //or   return a.marks <= b.marks;
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

            //or

    // if(a.marks < b.marks)
    // {
    //     return true;
    // }
    // else if(a.marks > b.marks)
    // {
    //     return false;
    // }
    // else
    // {
    //     if(a.roll < b.roll)             //or      return a.roll < b.roll;
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }

                //or

    if(a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else
    {
        return a.marks < b.marks;
    }
}
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
    sort(a,a+n,sajao);
    for(int i=0;i<n;i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}