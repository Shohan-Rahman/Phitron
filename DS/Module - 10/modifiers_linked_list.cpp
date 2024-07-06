#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> MyList = {10,20,30,40,50};       //resize
    // MyList.resize(2);
    // MyList.resize(5,5);
    // for(int value:MyList)
    // {
    //     cout << value << " ";
    // }

    // list<int> MyList = {10,20,30,40,50};         //assign
    // list<int> NewList = MyList;
    // for(int value:NewList)
    // {
    //     cout << value << " ";
    // }

    // list<int> MyList = {10,20,30,40,50};           //push-pop
    // MyList.push_back(100);
    // MyList.push_front(100);
    // MyList.pop_back();
    // MyList.pop_front();
    // for(int value:MyList)
    // {
    //     cout << value << " ";
    // }

    // list<int> MyList = {10,20,30,40,50,60,70};           //insert-single
    // // MyList.insert(next(MyList.begin(),3),200);
    // // MyList.insert(next(MyList.begin(),2),{100,200,300});

    // // list<int> NewList = {100,200,300};                                        //insert another list
    // // MyList.insert(next(MyList.begin(),3),NewList.begin(),NewList.end());


    // // MyList.erase(next(MyList.begin(),4));                           //erase
    // MyList.erase(next(MyList.begin(),2),next(MyList.begin(),5));
    // for(int value:MyList)
    // {
    //     cout << value << " ";
    // }

    // list<int> MyList = {10,20,30,40,30,50,30,30,60};             //replace
    // replace(MyList.begin(),MyList.end(),30,5);
    // for(int value:MyList)
    // {
    //     cout << value << " ";
    // }

    list<int> MyList = {10,20,30,40,50,60,70};                       //find
    auto it = find(MyList.begin(),MyList.end(),40);
    if(it == MyList.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}