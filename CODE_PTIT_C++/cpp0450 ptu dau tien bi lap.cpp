#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; map<int, int> mp;
		int x, res = -1, ok = 0;
		for(int i = 0; i < n; i++){
			cin>>x;
			mp[x]++;
			if( mp[x] == 2 && !ok){
				res = x;
				ok = 1;
			}
		}
		cout<<res<<'\n';
	}
}