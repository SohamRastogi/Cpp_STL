#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ;i++){
        cin >> arr[i];
    }

    auto it = find(arr , arr+n , 2);
     
    cout << (*it) << endl;
    
    return 0 ;
}