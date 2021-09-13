#include<bits/stdc++.h>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3) {
    unordered_set<int> s;
    vector<int> v;
    for(int i=0;i<n1;i++){
        s.insert(A[i]);
    }
    for(int i=0;i<n2;i++){
        if(s.find(B[i])!=s.end()){
            v.push_back(B[i]);
            s.erase(B[i]);
        }
    }
    s.clear();
    for(int i=0;i<v.size();i++){
        s.insert(v[i]);
    }
    v.clear();
    for(int i=0;i<n3;i++){
        if(s.find(C[i])!=s.end()){
            v.push_back(C[i]);
            s.erase(C[i]);
        }
    }
    return v;
}