#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["bangla"] = 60;
    mp["english"] = 50;
    mp["physics"] = 70;
    mp["chemistry"] = 90;

    // mp.insert({"bangla",60});
    // mp.insert({"english",50});
    // mp.insert({"physics",70});
    // mp.insert({"chemistry",90});

    for(auto it = mp.begin();it != mp.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    cout << mp["bangla"] << endl;
    
    if(mp.count("physics"))
    {
        cout << "Ase" << endl;
    }
    else
    {
        cout << "Nei" << endl;
    }
    return 0;
}