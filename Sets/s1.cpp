#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <string> s;
    s.insert ("abc");
    s.insert ("zsdf");
    s.insert ("bcd");

    for(auto ele : s){
        cout << ele  << " ";
    }
    return 0 ;
}