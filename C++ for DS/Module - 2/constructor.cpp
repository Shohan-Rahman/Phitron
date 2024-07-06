#include <bits/stdc++.h>
using namespace std;
class s
{
    public:
    int roll;
    double cgpa;
    s(int roll,double cgpa)
    {
        this->roll=roll;
        this->cgpa=cgpa;
    }
};
int main()
{
    s sazzad(29,3.17);
    s mahfuz(35,3.30);
    cout << sazzad.roll << " " << sazzad.cgpa << " " << endl;      
    cout << mahfuz.roll << " " << mahfuz.cgpa << " " << endl;      
    return 0;
}