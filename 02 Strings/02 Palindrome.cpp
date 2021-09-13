#include<bits/stdc++.h>
using namespace std;

bool fun(string s){
    int l=0, r = s.size()-1;
    while(l<r){
        if(s[l] != s[r]){
            return false;
            break;
        }
        else{
            l++; r--;
        }
    }
    return true;
}
int main(){
    string s; cin>>s;
    if(fun(s)) cout<<"Yes";
    else cout<<"NO";
    return 0;
}