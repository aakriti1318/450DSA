#include<bits/stdc++.h>
using namespace std;

int fun(int arr[], int l, int r, int k){
    priority_queue<int> pq;
    int count=0;
    for(int i=l;i<r;i++){
        pq.push(arr[i]);
        count++;
        if(count>k){
            pq.pop();
        }
    }
    return pq.top();
}

int main(){
    int n; cin>>n; 
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<fun(arr,0,n-1,3);
    return 0;
}