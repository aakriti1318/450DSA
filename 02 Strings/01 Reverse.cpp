#include<bits/stdc++.h>
using namespace std;

string fun(string s){
    int l=0, r = s.size()-1;
    while(l<r){
        swap(s[l],s[r]);
        l++; r--;
    }
    return s;
}
int main(){
    string s; cin>>s;
    s = fun(s);
    cout<<s;
    return 0;
}