#include<bits/stdc++.h>
using namespace std;

string fun(vector<int> a1, vector<int> a2, int n, int m) {
    unordered_set<int> s;
    bool flag = true;
    
    for(int i=0;i<n;i++){
        s.insert(a1[i]);
    }
    for(int i=0;i<m;i++){
        if(s.find(a2[i])!=s.end()){
            continue;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag){
        return "Yes";
    }
    return "No";
}
int main(){
    int n,m; cin>>n>>m;
    vector<int> v1,v2; 
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v1.push_back(a);
    }
    for(int i=0;i<m;i++){
        int b; cin>>b;
        v2.push_back(b);
    }
    if(fun(v1,v2,n,m)) cout<<"YES";
    else cout<<"NO";
    // cout<<fun(v,n,k);
    return 0;
}