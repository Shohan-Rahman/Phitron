#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    int cls;
    double cgpa;
};
int main()
{
    // Direct initialization

    // student a;
    // char tmp[100] = "hello";
    // strcpy(a.name,tmp);
    // a.roll = 10;
    // a.cls = 9;
    // a.cgpa = 3.50;
    // cout << a.name << " " << a.roll << " " << a.cls << " " << a.cgpa << endl;

    //Input niye
    
    student a,b,c;
    cin.getline(a.name,100);
    cin >> a.roll >> a.cls >> a.cgpa;
    getchar();
    cin.getline(b.name,100);
    cin >> b.roll >> b.cls >> b.cgpa;
    getchar();
    cin.getline(c.name,100);
    cin >> c.roll >> c.cls >> c.cgpa;
    cout << a.name << " " << a.roll << " " << a.cls << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cls << " " << b.cgpa << endl;
    cout << c.name << " " << c.roll << " " << c.cls << " " << c.cgpa << endl;
    return 0;
}