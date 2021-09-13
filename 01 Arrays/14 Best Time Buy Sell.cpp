#include<bits/stdc++.h>
using namespace std;

int fun(vector<int> v){
    int minn = INT_MAX, ans = 0;
    for(int x:v){
        minn = min(x,minn);
        ans = max(ans, x-minn);
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    cout<<fun(v);
    
    return 0;
}