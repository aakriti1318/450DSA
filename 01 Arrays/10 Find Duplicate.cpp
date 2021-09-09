#include<bits/stdc++.h>
using namespace std;

int fun(int arr[], int n){
    vector<int> v(n+1);
    int ans = 0;
    for(int i=0;i<n;i++){
        v[arr[i]]++;
        if(v[arr[i]]>=2){
            ans = arr[i];
            break;
        }
    }
    return ans;
}


int main(){
    int n; cin>>n; 
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<fun(arr,n);
    return 0;
}