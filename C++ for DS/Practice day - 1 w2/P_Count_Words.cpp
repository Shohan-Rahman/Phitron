#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int cnt = 0;
    while(ss>>word)
    {
        bool found = false;
        for(char c:word)
        {
            if(isalpha(c))
            {
                if(found==false)
                {
                    cnt++;
                }
                found = true;
            }
            else
            {
                found = false;
            }
        }
    }
    cout << cnt <<endl;
    return 0;
}