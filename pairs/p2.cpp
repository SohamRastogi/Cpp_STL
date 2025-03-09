#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair <int,string> p;
    p = make_pair(2,"abc");

    pair < int, string > p2 = p;

    p2.first = 3;

    cout << p.first << " " << p.second;
    cout << endl;
    cout << p2.first << " " << p2.second;
    return 0;
}