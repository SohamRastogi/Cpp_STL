#include<bits/stdc++.h>
using namespace std;

void printVec ( vector <int> v ){

    for( int i =0 ;i < v.size() ; i++){
        cout << v[i] << " ";
    }
    cout<< endl;
    return ;
}

int main()
{

    vector < int  > v(5);

    printVec(v);

    return 0 ;
}