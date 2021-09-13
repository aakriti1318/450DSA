#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> arr, int n, int k) {
    unordered_map<int,int> mp;
    int res = 0;
    for(int i=0;i<n;i++){
        if(mp.find(k-arr[i])!=mp.end())
            res += mp[k-arr[i]];
        mp[arr[i]]++;
    }
    return res;
}
int main(){
    int n,k; cin>>n>>k;
    vector<int> v; 
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    // if(fun(v,n)) cout<<"YES";
    // else cout<<"NO";
    cout<<fun(v,n,k);
    return 0;
}