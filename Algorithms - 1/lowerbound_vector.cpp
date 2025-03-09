#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n ;

    vector <int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    for(int i = 0 ; i < n ; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int> :: iterator it;

    it = upper_bound(v.begin() , v.end() , 5);

    if(it == v.end())  cout<<"not found";
    
    else
    cout << (*it);

    return 0 ;
}