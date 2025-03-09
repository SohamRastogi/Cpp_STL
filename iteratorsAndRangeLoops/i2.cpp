#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector < pair < int,int >> vp;
    vp.push_back(make_pair(1,2));
    vp.push_back(make_pair(2,3));
    vp.push_back(make_pair(3,4));

    vector < pair <int,int >> :: iterator it;
    for(it = vp.begin() ; it != vp.end() ; it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0 ;
}