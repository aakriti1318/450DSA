#include<bits/stdc++.h>
using namespace std;

void fun(int arr[], int n){
    int tmp = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = tmp;
}

int main(){
    int n; cin>>n; 
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    fun(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}