#include<bits/stdc++.h>
using namespace std;

int main()
{

    multiset <string> s;

    s.insert ("abc");
    s.insert ("zsdf");
    s.insert ("bcd");
    s.insert ("abc");

    s.erase("abc");

    for(auto ele : s){
        cout << ele << endl;
    }


    return 0 ;

}