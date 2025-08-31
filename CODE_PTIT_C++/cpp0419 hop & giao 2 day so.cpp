#include <bits/stdc++.h>
using namespace std;
int dd[100001];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m; int a[n], b[m];
		int value = INT_MIN;
		for(int& i : a){
			cin>>i;
			value = max(i, value);
			dd[i]++;
		}
		for(int& i : b){
			cin>>i;
			value = max(i, value);
			dd[i]++;
		}
		for(int i = 0; i <= value; i++){
			if(dd[i]>0) cout<<i<<' ';
		}
		cout<<'\n';
		for(int i = 0; i <= value; i++){
			if(dd[i]==2) cout<<i<<' ';
		}
		memset(dd, 0, sizeof(dd));
		cout<<'\n';
	}
}