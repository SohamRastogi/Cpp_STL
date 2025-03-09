#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector <int> v(10,3);
    v.push_back(10);
    v.push_back(10);
    v.pop_back();

    for(int i=0;i<v.size(); i++){
        cout << v[i] << " ";
    }

    return 0 ;
}