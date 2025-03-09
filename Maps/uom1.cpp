#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map <int,string> m ;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";

    for(auto ele : m){
        cout << ele.first << " " << ele.second << endl;
    }
    return 0 ;
}