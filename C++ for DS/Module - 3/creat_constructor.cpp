#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    int cls;
    int roll;
    double cgpa;

    //Onno variable niye

    // student(int c,int r,double cg)
    // {
    //     cls=c;
    //     roll=r;
    //     cgpa=cg;
    // }

    //This use kore

    student(int cls,int roll,double cgpa)
    {
        this->cls=cls;
        this->roll=roll;
        this->cgpa=cgpa;
    }
};
int main()
{
    student rahim(10,55,3.44);
    student fahim(9,50,3.83);
    student karim(8,40,3.51);
    cout << rahim.cls << " " << rahim.roll << " " << rahim.cgpa << endl;
    cout << fahim.cls << " " << fahim.roll << " " << fahim.cgpa << endl;
    cout << karim.cls << " " << karim.roll << " " << karim.cgpa << endl;
    return 0;
}