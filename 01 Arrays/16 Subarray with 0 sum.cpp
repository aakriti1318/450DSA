#include<bits/stdc++.h>
using namespace std;
bool fun(vector<int> arr, int n){
    unordered_set<int> s;
    int presum = 0;
    for(int i=0;i<n;i++){
        presum = presum + arr[i];
        if(s.find(presum)!=s.end()){
            return true;
        }
        if(presum == 0) return true;
        s.insert(presum);
    }
    return false;
}
int main(){
    int n; cin>>n;
    vector<int> v; 
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    if(fun(v,n)) cout<<"YES";
    else cout<<"NO";
    return 0;
}