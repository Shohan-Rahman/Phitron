#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {1,2,3,4,5};     //push_back
    // v.push_back(10);
    // v.push_back(20);
    // for(int i:v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // v.pop_back();                     //pop_back
    // v.pop_back();
    // for(int i:v)
    // {
    //     cout << i << " ";
    // }

    // vector<int> v = {1,2,3,4,5};
    // // v.insert(v.begin()+2,99);            //1ta insert
    // vector<int> v2 = {10,20,30};             //multiple value insert
    // v.insert(v.begin()+3,v2.begin(),v2.end());
    // for(int x:v)
    // {
    //     cout << x << " ";
    // }

    // vector<int> v = {1,2,3,4,5};
    // // v.erase(v.begin()+2);                  //1 ta erase
    // v.erase(v.begin()+1,v.end()-1);            //multiple value erase
    // for(int n:v)
    // {
    //     cout << n << " ";
    // }

    // vector<int> v = {1,2,2,3,4,5,2,3,5,7,5,2,9};           //replace
    // replace(v.begin(),v.end(),2,50);
    // for(int c:v)
    // {
    //     cout << c << " ";
    // }

    vector<int> v = {1,2,2,3,4,5,2,3,5,7,5,2,9};           //find
    // vector<int>::iterator it;
    // it = find(v.begin(),v.end(),50);
    auto it = find(v.begin(),v.end(),5);
    cout << *it << endl;
    if(it == v.end()) cout << "Not Found";
    else cout << "Found";
    return 0;
}