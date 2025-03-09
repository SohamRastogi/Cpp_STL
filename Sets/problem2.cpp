#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    
    set <string> s;
    
    for(int i = 0 ; i < n ; i++){
        string str;
        cin >> str;
        s.insert(str);
    }

    int q;
    cin >> q;
    while(q--){

        string ptr ;
        cin >> ptr ;
        auto it = s.find(ptr);

        if(it == s.end()){
            cout<< "no" << endl;
        }

        else { 
            cout << "yes" << endl;
        }
    }

    return 0 ;

}