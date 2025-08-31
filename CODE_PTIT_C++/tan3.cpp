#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n, m; cin>>n>>m; vector<int> v(n);
		int maxx = INT_MIN;
		vector<int> am, duong;
		for(int& i  : v){
			cin>>i;
			maxx = max(maxx, i);
			if(i<0) am.push_back(i);
			else duong.push_back(i);
		}
		auto pos = find(duong.begin(), duong.end(), maxx);
        duong.insert(pos, m);
		for(int i : am) cout<<i<<' ';
		for(int i : duong) cout<<i<<' ';
		cout<<'\n';
	}
}