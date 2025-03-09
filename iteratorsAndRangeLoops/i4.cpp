// correct code : 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector < pair < int,int >> v ;
    v = {{1,2},{3,4},{5,6}} ; 
    
    for(auto ele : v){
        cout << ele.first << " " << ele.second << endl ;
    } 
   
    return 0 ;
}