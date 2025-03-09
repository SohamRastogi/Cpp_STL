#include<bits/stdc++.h>
using namespace std;

bool should_i_swap(pair<int,int> a,pair<int,int> b)
{
    if(a>b) return true;
    else return false;
}

int main()
{
    int n;
    cin >> n ;

    vector<pair<int,int>> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(),v.end(), should_i_swap);

    for(int i = 0 ; i < n ; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }

    

}