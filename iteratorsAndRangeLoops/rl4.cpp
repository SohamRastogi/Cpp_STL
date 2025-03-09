// correct code : 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <pair<int,int>> v;
    
    v.push_back(make_pair(1,2));
    v.push_back(make_pair(3,4));
    v.push_back(make_pair(5,6));

    for(pair<int,int> ele : v){
        cout << ele.first << " " << ele.second << endl;
    }
    return 0 ;
}