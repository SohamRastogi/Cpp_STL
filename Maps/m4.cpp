#include<bits/stdc++.h>
using namespace std;

int main()
{

    map <int,string> m ;
    m[1] = "abc";
    m[2] = "cdc";
    m[3] = "acd";
    m[4] = "def";


    m.erase (3);

    for(auto ele : m){
        cout << ele.first << " " << ele.second << endl;
    }
    
    return 0 ;
}