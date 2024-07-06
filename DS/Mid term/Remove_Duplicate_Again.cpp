#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> MyList;
    int v;
    while(true)
    {
        cin >> v;
        if(v==-1)
        {
            break;
        }
        MyList.push_back(v);
    }
    MyList.sort();
    MyList.unique();
    for(int val:MyList)
    {
        cout << val << " ";
    }
    return 0;
}