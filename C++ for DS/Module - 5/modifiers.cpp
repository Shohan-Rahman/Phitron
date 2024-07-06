#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s1 = "Hokk";            //append or add anothaer string
    // string s2 = "A";
    // s1 = s1 + s2;      //->work
    // cout << s1 << endl;

    // s1+=s2;             //->work
    // cout << s1 << endl;

    // s1.append(s2);       //->work
    // cout << s1 << endl;

    // string s = "Hell";                  //character add
    // s = "HellO";            //->work
    // s=s+"O";                 //->work
    // s[4] = 'O';               //->didn't work
    // s.push_back('P');          //->work
    // cout << s << endl;

    // string s = "Hello";          //last character bad deowa
    // cout << s << endl;
    // s.pop_back();
    // cout << s << endl;
    // s.pop_back();
    // cout << s << endl;
    // s.pop_back();
    // cout << s << endl;

    string s = "kalooddhai";
    // s.erase(4);     //-> 4 ta letter rekhe bakita delete
    // s.erase(4,1);       //-> 4 ta letter er por koita letter delete
    // s.replace(4,0,"PP");    //-> 4 ta letter er por koita letter er okhane replace
    s.insert(4,"NO");
    cout << s << endl;
    return 0;
}