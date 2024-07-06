#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    // student a;
    // cin >> a.name >> a.roll >> a.cgpa;
    // cout << a.name << " " << a.roll << " " << a.cgpa;

    // student a;
    // a.roll = 10;
    // a.cgpa = 3.55;
    // char tmp[100] = "Hello";
    // strcpy(a.name,tmp);
    // cout << a.name <<" " << a.roll << " " << a.cgpa;

    student a;
    cin >> a.roll >> a.cgpa;
    getchar();
    cin.getline(a.name,100);
    cout << a.name <<" " << a.roll << " " << a.cgpa; 
}