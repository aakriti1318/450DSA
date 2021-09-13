#include<bits/stdc++.h>
using namespace std;
bool fun(string s1, string s2){
    if(s1.size()!=s2.size()) return false;
    string tmp = s1+s1;
    return tmp.find(s2)!=string::npos;
}
int main(){
    string s1,s2; cin>>s1>>s2;
    if(fun(s1,s2)) cout<<"YES";
    else cout<<"NO";
    return 0;
}