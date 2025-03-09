// correct code : 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    unordered_set <string> s;
    s.insert ("abc");
    s.insert ("xsdf");
    s.insert ("bcd");
    s.insert ("bcd");
    s.insert ("abc");

    auto it = s.find("abc");

    cout <<(*it) <<endl;

    return 0 ;
}