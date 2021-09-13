#include<bits/stdc++.h>
using namespace std;

string fun(string s){
    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    } 
    string str;
    for(auto x:mp){
        if(x.second>1){
            str.push_back(x.first);
        }
    }
    return str;
}
int main(){
    string s; cin>>s;
    cout<<fun(s);
    return 0;
}