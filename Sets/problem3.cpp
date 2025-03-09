#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        int n,k ;
        int sum = 0;
        cin >> n >> k;

        multiset <int> s;

        vector <int> v;

        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i =0 ; i < n ;i++){
            s.insert(v[i]);
        }

        multiset <int> :: iterator it;
        while(k--){
        it = s.end();
        it--;
        
        sum = sum + (*it);
        int alpha = (*it)/2;
        s.insert(alpha);
        s.erase(it);
        }
        cout <<sum <<endl;

    }
    return 0 ;

}