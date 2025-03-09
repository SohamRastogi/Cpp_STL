// correct code :   
// solution for balanced parenthesis =>

#include<bits/stdc++.h>
using namespace std;

unordered_map <char,int> m = {{'[',-1},{'{',-2},{'(',-3},{')',3},{'}',2},{']',1}} ;

int isBalanced (string s){

    stack <char> st;
    for(char ele : s){
        if(m[ele] < 0 ){
            st.push(ele);
        }
        else { 
            if (st.empty()) {
                cout<<"NO";
                return 0;
            }
            char top = st.top();
            st.pop();
            if(m[top] + m[ele] != 0){
                cout << "NO";
                return 0;
            }
        }

    }
    if(st.empty()) {
        cout << "YES";
        return 0;
    }
    else {
        cout << "NO";
        return 0 ;
    }

}

int main()
{

    int n;
    cin >> n;

    while (n--){
        string s;
        cin >> s;
        isBalanced(s);
    }

    return 0;



}