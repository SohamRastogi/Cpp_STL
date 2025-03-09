#include <bits/stdc++.h>
using namespace std;

int main()
{
    map < int,string > m ;
    m[1] = "abc";
    m[2] = "def";
    m[3] = "ghi";
    m[4] = "alpha";

    for(auto ele : m){
        cout << ele.first << " " << ele.second << endl;
    }
    return 0 ;
}