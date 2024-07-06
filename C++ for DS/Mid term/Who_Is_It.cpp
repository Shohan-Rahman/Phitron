#include <bits/stdc++.h>
using namespace std;
class st
{
    public:
    int id;
    char name[101];
    char section[101];
    int marks;
};
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    st a;
    cin>>a.id>>a.name>>a.section>>a.marks;
    st b;
    cin>>b.id>>b.name>>b.section>>b.marks;
    st c;
    cin>>c.id>>c.name>>c.section>>c.marks;

    //konta boro check

    if(a.marks > b.marks && a.marks > c.marks)
    {
        cout << a.id << " " << a.name << " " << a.section << " " << a.marks << endl;
    }
    else if(b.marks > a.marks && b.marks > c.marks)
    {
        cout << b.id << " " << b.name << " " << b.section << " " << b.marks << endl;
    }
    else if(c.marks > a.marks && c.marks > b.marks)
    {
        cout << c.id << " " << c.name << " " << c.section << " " << c.marks << endl;
    }

    //2ta soman kina

    else if(a.marks == b.marks || a.marks == c.marks || b.marks == c.marks)
    {
        if(a.marks == b.marks)
        {
            if(a.id < b.id)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.marks << endl;
            }
            else
            {
                cout << b.id << " " << b.name << " " << b.section << " " << b.marks << endl;
            }
        }
        else if(a.marks == c.marks)
        {
            if(a.id < c.id)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.marks << endl;
            }
            else
            {
                cout << c.id << " " << c.name << " " << c.section << " " << c.marks << endl;
            }
        }
        else if(b.marks == c.marks)
        {
            if(b.id < c.id)
            {
                cout << b.id << " " << b.name << " " << b.section << " " << b.marks << endl;
            }
            else
            {
                cout << c.id << " " << c.name << " " << c.section << " " << c.marks << endl;
            }
        }
    }

    //3ta soman kina

    else if(a.marks==b.marks && b.marks==c.marks)
    {
        if(a.id < b.id)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.marks << endl;
            }
        else
            {
                cout << b.id << " " << b.name << " " << b.section << " " << b.marks << endl;
            }
        if(a.id < c.id)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.marks << endl;
            }
        else
            {
                cout << c.id << " " << c.name << " " << c.section << " " << c.marks << endl;
            }
        if(b.id < c.id)
            {
                cout << b.id << " " << b.name << " " << b.section << " " << b.marks << endl;
            }
        else
            {
                cout << c.id << " " << c.name << " " << c.section << " " << c.marks << endl;
            }
    }
    }
    return 0;
}