#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> MyList;                 //only list declaire
    // cout << MyList.size() << endl;

    // list<int> MyList (10);            //size declaire
    // cout << MyList.size() << endl;

    // list<int> MyList (10,5);           //size+value declaire output:- 5555555555

    // cout << MyList.front();

    // for(auto it = MyList.begin();it != MyList.end();it++)    //list print
    // {
    //     cout << *it << " ";
    // }

    // for(int value:MyList)              // list print
    // {
    //     cout << value << " ";
    // }

    // list<int> MyList = {1,2,3,4,5};          //copy list
    // list<int> MyList_2(MyList);

    // for(int value:MyList)
    // {
    //     cout << value << " ";
    // }

    // int a[5] = {10,20,30,40,50};             //array er maddhome
    // list<int> MyList(a,a+5);

    // for(int value:MyList)
    // {
    //     cout << value << " ";
    // }

    vector<int> v = {100,200,300,400,500};       //vector er maddhome
    list<int> MyList(v.begin(),v.end());

    for(int value:MyList)
    {
        cout << value << " ";
    }
    return 0;
}