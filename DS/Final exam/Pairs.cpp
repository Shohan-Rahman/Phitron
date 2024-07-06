#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;

    Student(string name,int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};
bool cmp(pair<string,int> a,pair<string,int> b) 
{
    if(a.first == b.first) 
    {
        return a.second>b.second;
    } 
    else 
    {
        return a.first<b.first;
    }
}
int main() 
{
    int n;
    cin >> n;
    vector<pair<string,int>> v;
    for(int i=0;i<n;i++)
    {
        string name;
        int roll;
        cin >> name >> roll;
        v.push_back({name,roll});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it=v.begin();it!=v.end();it++) 
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
