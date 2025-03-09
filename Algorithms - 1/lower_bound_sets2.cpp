#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set <int> s;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    auto it = s.lower_bound(5);

    if(it == s.end()) cout<<"not found";

    else cout<<(*it);


  
    return 0 ;
}