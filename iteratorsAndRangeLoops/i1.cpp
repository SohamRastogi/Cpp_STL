#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector < int > v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    vector <int> :: iterator it;
    for(it = v.begin() ; it != v.end() ; it++){
        cout << (*it) << " " ;
    }
    return 0 ;
}