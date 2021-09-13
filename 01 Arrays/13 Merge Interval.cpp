#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fun(vector<vector<int>>& v) {
    vector<vector<int>> ans;
    if(v.size()<=1) return v;
    sort(v.begin(),v.end());
    ans.push_back(v[0]);
    for(int i=1;i<v.size();i++){
        if(ans.back()[1]>=v[i][0]) 
            ans.back()[1] = max(ans.back()[1],v[i][1]);
        else
            ans.push_back(v[i]);
    }
    return ans;
}

int main(){
	vector<vector<int>> vect{
		{1,3},{2,6},{8,10},{15,18}
	};
    vect = fun(vect);
	for (int i = 0; i < vect.size(); i++){
		for (int j = 0; j < vect[i].size(); j++)
			cout << vect[i][j] << " ";
		cout << endl;
	}
	return 0;
}
