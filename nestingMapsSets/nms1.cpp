// correct code : 

#include<bits/stdc++.h>
using namespace std;

int main()
{

    map <pair<string,string>, vector<int>> m;

    int N;
    cin >> N;

    while(N--){

        string fn,ln;
        int count;
        cin >> fn >> ln >> count ;
        while(count--){
            int x;
            cin >> x;
            m[make_pair(fn,ln)].push_back(x);
        }
    }

    for(auto ele : m){
        cout << ele.first.first << " " << ele.first.second << endl;
        for(int j = 0 ; j < ele.second.size() ; j++){
            cout << ele.second[j] <<" ";
        }
        cout<< endl;
        
    }

    return 0 ;
}