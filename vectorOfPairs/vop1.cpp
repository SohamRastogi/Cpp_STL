// correct code : 

#include<bits/stdc++.h>
using namespace std;

void printVec( vector <pair<int,int>> v){
    for(int i = 0; i < v.size() ; i++){
        cout << v[i].first << v[i].second << endl;
    }
    cout<< endl;
}

int main()
{
    vector < pair <int,int> > v;
    v.push_back(make_pair(1,2));
    v.push_back(make_pair(2,3));
    v.push_back(make_pair(3,5));

    printVec(v);
    return 0 ;
}