#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    map <int,string> m ;
    m[1] = "abc";
    m[2] = "cdc";
    m[3] = "acd";
    m[4] = "def";

    int x;
    cin >> x;

    auto it = m.find(x);

    if(it != m.end()){
        m.erase(it);
    }

    for(auto ele : m){
        cout << ele.first << " " << ele.second << endl;
    }

    return 0 ;
}
