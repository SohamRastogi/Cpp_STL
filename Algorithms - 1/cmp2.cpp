#include<bits/stdc++.h>
using namespace std;

bool should_i_swap(int a, int b)
{
    if(a > b)
    return true;

    else return false;
}

int main()
{
    
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    for(int i = 0 ; i < n-1 ; i ++){
        for(int j = 0 ; j < n-1 ; j++){
            if(should_i_swap(v[j],v[j+1])){
                swap(v[j] , v[j+1]);
            }
        }
    }

    for(int i = 0 ; i < n ; i ++ ){
        cout  << v [i]  << " ";
    }

    return 0 ;
}