#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> MyList;
    int n;
    cin >> n;
    while(n--)
    {
        int pos,v;
        cin >> pos >> v;
        if(pos == 0)
        {
            MyList.push_front(v);
            cout << "L" << " " << "->" << " ";
            for(int val:MyList)
            {
                cout << val << " ";
            }
            cout << endl;
            MyList.reverse();
            cout << "R" << " " << "->" << " ";
            for(int val:MyList)
            {
                cout << val << " ";
            }
            cout << endl;
            MyList.reverse();
        }
        else if(pos == 1)
        {
            MyList.push_back(v);
            cout << "L" << " " << "->" << " ";
            for(int val:MyList)
            {
                cout << val << " ";
            }
            cout << endl;
            MyList.reverse();
            cout << "R" << " " << "->" << " ";
            for(int val:MyList)
            {
                cout << val << " ";
            }
            cout << endl;
            MyList.reverse();
        }
        else if(pos == 2)
        {
            if(MyList.size() == v)
            {
                cout << "L" << " " << "->" << " ";
                for(int val:MyList)
                {
                    cout << val << " ";
                }
                cout << endl;
                MyList.reverse();
                cout << "R" << " " << "->" << " ";
                for(int val:MyList)
                {
                    cout << val << " ";
                }
                cout << endl;
                MyList.reverse();
            }
            else if(MyList.size() < v)
            {
                cout << "L" << " " << "->" << " ";
                for(int val:MyList)
                {
                    cout << val << " ";
                }
                cout << endl;
                MyList.reverse();
                cout << "R" << " " << "->" << " ";
                for(int val:MyList)
                {
                    cout << val << " ";
                }
                cout << endl;
                MyList.reverse();
            }
            else if(MyList.size()>v)
            {
                MyList.erase(next(MyList.begin(),v));
                cout << "L" << " " << "->" << " ";
                for(int val:MyList)
                {
                    cout << val << " ";
                }
                cout << endl;
                MyList.reverse();
                cout << "R" << " " << "->" << " ";
                for(int val:MyList)
                {
                    cout << val << " ";
                }
                cout << endl;
                MyList.reverse();
            }
        }
        }
    return 0;
}