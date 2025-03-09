// correct code : 

#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>> &v){

    for(int i = 0 ; i < v.size() ; i++){
        
        cout << v[i].first << " " << v[i].second << " "; 
    }
    
    return ;
}

int main()
{
    // vector <pair<int,int>> v = {{1,2},{3,4},{5,6}};
    vector <pair<int ,int>> v;
    int n;
    cin >> n;
    for(int i = 0;i < n; i++){
        int x;
        int y;
        cin>> x>>y;
        v.push_back({x,y});
        
    }
    
    // int n;
    // cin >> n;
    
    // for(int i=0;i<n;i++){
    //     int x;
    //     int y;
    //     v.push_back({x,y});
    // }
    
    printVec(v);
    
    return 0;
}