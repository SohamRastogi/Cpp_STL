#include<bits/stdc++.h>
using namespace std;


bool cmp (int a ,int b){
    if(a>b) return false;
    else return true;
}


int main()
{
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }

    sort (v.begin() , v.end() , cmp);

    for(int i = 0 ; i  < n ; i++){
        cout << v[i] << " ";
    }
    return 0 ;
}