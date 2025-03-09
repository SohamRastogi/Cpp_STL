#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <string> s;
    s.insert ("abc");
    s.insert ("zsdf");
    s.insert ("bcd");

    set<string> :: iterator it;
    it = s.find("abc");
    if(it != s.end()){
        cout<<(*it);
    }

    return 0 ;
}