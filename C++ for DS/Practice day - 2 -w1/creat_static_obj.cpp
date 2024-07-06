#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
	char name[100];
	int roll;
	char section[50];
	int math_marks;
	int cls;
    Student(char name[],int roll,char section[],int math_marks,int cls)
    {
        strcpy(this->name,name);
        this->roll=roll;
        strcpy(this->section,section);
        this->math_marks=math_marks;
        this->cls=cls;
    }
};
int main()
{
    char name[100]="Hippo";
    char section[50]="A";
    Student a(name,01,section,99,10);
    char name1[100]="phyco";
    char section1[50]="B";
    Student b(name1,10,section1,70,10);
    char name2[100]="Mono";
    char section2[50]="C";
    Student c(name2,11,section2,90,10);
    if(a.math_marks > b.math_marks && a.math_marks > c.math_marks)
    cout<< a.name << " " << a.roll << " " << a.section << " " << a.math_marks << " " << a.cls << endl;
    else if(b.math_marks > a.math_marks && b.math_marks > c.math_marks)
    cout<< b.name << " " << b.roll << " " << b.section << " " << b.math_marks << " " << b.cls << endl;
    else
    cout<< c.name << " " << c.roll << " " << c.section << " " << c.math_marks << " " << c.cls << endl;
    return 0;
}
