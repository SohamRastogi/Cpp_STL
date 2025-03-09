#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <int,int> m;
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        int x;
        int y;
        cin >> x >> y;
        m[x] = y;
    }

    for(auto ele : m){
        cout << ele.first << " " << ele.second << endl;
    }

    auto it = m.lower_bound(5);  // O ( logn );
    // auto it = lower_bound (m.begin() , m.end() , 5) => O (n);

    cout << (*it).first << " " << (*it).second;

    return 0 ;
}