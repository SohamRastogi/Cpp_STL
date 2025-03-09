// this is correct code : 

#include<bits/stdc++.h>
using namespace std;


bool should_i_swap (pair<int,int> a, pair<int,int> b)
{
    if(a.first != b.first) {
        if(a>b) return true;
        else return false;
    }
    
    else{
        if(a>b) return false;
        else return true;
    }
    
}


int main()
{
    int n;
    cin >> n;

    vector <pair<int,int>> v(n);

    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-1 ; j++){
            if(should_i_swap(v[j] , v[j+1]))
            {
                swap(v[j],v[j+1]);
            }
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0 ;
}