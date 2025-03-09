// correct code : 

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n ;
    cin >> n;
    map < int , multiset <string> > m;

    while(n--){
        int marks ;
        string name ;
        cin >> name >> marks ;
        m[marks].insert(name);
    }

    auto it = m.end();
    it--;
    
   

    while(true) {
        
        auto sets = (*it).second;
        int marks = (*it).first;
        for(auto ele : sets){
            cout << ele << " " << marks <<endl;
        }
        if(it==m.begin()) break;
        
        
        it--;
    }
    return 0 ;

}