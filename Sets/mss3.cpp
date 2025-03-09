#include<bits/stdc++.h>
using namespace std;

int main()
{

    multiset <string> s;
    s.insert ("abc");
    s.insert ("zsdf");
    s.insert ("bcd");
    s.insert ("abc");

    multiset <string> :: iterator it ;

    it = s.find ( "abc");
    s.erase (it);

    for(auto ele : s){
        cout << ele << " " ;
    }

    return 0 ;

}