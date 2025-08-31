#include <bits/stdc++.h>
using namespace std;
int dd[100001];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m; int a[n], b[m];
		for(int& i : a){
			cin>>i;
			dd[i]++;
		}
		for(int& i : b){
			cin>>i;
			dd[i]++;
		}
		int maxx = max(a[n-1], b[m-1]), minn = min(a[n-1], b[m-1]);
		for(int i = 0; i <= maxx; i++){
			if(dd[i]>0) cout<<i<<' ';
		}
		cout<<'\n';
		for(int i = 0; i <= minn; i++){
			if(dd[i]==2) cout<<i<<' ';
		}
		cout<<'\n';
		memset(dd, 0, sizeof(dd));
	}
}