#include<bits/stdc++.h>
using namespace std;

int fun(int arr[], int n){
    int res = arr[0], sum = arr[0];
    for(int i=1;i<n;i++){
        sum = max(sum+arr[i], arr[i]);
        res = max(res, sum);
    }
    return res;
}


int main(){
    int n; cin>>n; 
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<fun(arr,n);
    return 0;
}