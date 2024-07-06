#include <bits/stdc++.h>
using namespace std;
namespace boom
{
    int age = 20;
    void fun()
    {
        cout << "Hello" << endl;
    }

}
namespace dhoom
{
    int age = 30;
    void fun()
    {
        cout << "Nope" << endl;
    }

}
using namespace boom;
int main()
{
    cout << age << endl;
    fun();
    cout <<dhoom:: age << endl;
    dhoom::fun();
    return 0;
}