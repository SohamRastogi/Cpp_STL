#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <int,string> m ;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert (make_pair(4,"soham"));
    m.insert (make_pair(5,"cde"));

    // map < int,string > :: iterator it;
    for(auto it = m.begin( ) ; it != m.end() ; it++){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0 ;
}