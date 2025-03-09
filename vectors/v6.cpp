#include<bits/stdc++.h>
using namespace std;

void printVec (vector <string> v){
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " ";
    }
    return ;
}

int main()
{
    int n;
    cin >> n;
    vector <string> v;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    printVec(v);
    return 0;
}