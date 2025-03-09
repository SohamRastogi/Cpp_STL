#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    int ct = count(v.begin() , v.end() , 2);

    cout << ct;

    return 0 ;
}