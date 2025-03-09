#include<bits/stdc++.h>
using namespace std;


// comparator function : 
bool should_i_swap(int a , int b)
{
    if(a>b) return true;
    else return false;
}


int main()
{

    int n;
    cin >> n;
    
    int arr[n];

    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-1 ; j++){
            if(should_i_swap(arr[j],arr[j+1])){    // if (arr[j] > arr[j+1])
                int temp;
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    for(int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }
   

    return 0 ;
}