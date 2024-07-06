#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
	int jersey_no;
	char country[100];
};
int main()
{
    Cricketer* dhoni=new Cricketer;
    dhoni->jersey_no=10;
    char name[100]="India";
    strcpy (dhoni->country,name);
    Cricketer* kholi=new Cricketer;
    // kholi=dhoni;
    // cout<<dhoni->jersey_no << endl << dhoni->country<<endl;
    kholi->jersey_no=dhoni->jersey_no;
    strcpy(kholi->country,dhoni->country);
    delete dhoni;
    cout << kholi->jersey_no << endl << kholi->country;
    return 0;
}