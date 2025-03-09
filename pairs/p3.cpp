#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p;
    p = make_pair ( 2, "abd");
    pair < int,string > &p2 = p;

    p2.first = 3;
    p2.second = "soham";
    cout << p.first << " " << p.second << endl << p2.first << " " << p2.second ;

    return 0;
}