#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m; 
		int a[n], b[m];
		set<int> hop, giao;
		for(int& i : a){
			cin>>i;
			hop.insert(i);
			giao.insert(i);
		}
		for(int& i : b){
			cin>>i;
			hop.insert(i);
		}
		for(auto it : hop) cout<<it<<' ';
		cout<<'\n';
		for(int i = 0; i < m; i++){
			if(giao.count(b[i])){
				cout<<b[i]<<' ';
			}
		}
		cout<<'\n';
	}
}