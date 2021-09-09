#include<bits/stdc++.h>
using namespace std;

int fun(int arr[], int n){
    int l = 0, r = 0;
    int ans = 0;
    ans = arr[n-1]-arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>=k){
            r = max(arr[i-1]+k,arr[n-1]-k);
            l = min(arr[i]-k, arr[0]+k);
            ans = min(ans,r-l);
        }
        else continue;
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