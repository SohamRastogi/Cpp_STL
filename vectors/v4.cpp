#include<bits/stdc++.h>
using namespace std;

void printVec( vector<int> v){

    for(int i = 0; i < v.size() ; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector <int> v ;
    v.push_back(10);
    v.push_back(5);
    v.push_back(4);
    v.push_back(12);
    
    vector <int> v2 = v; // shallow copy;

    v2.push_back(100);

    printVec(v);
    printVec(v2);
    return 0;
}