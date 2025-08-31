#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n], b[n];
		for(int& i : a) cin>>i;
		sort(a, a+n);
		int cnt = 0;
		for(int i = 0; i < n; i+=2){
			b[i] = a[cnt++];
		}
		for(int i = 1; i < n; i+=2){
			b[i] = a[cnt++];
		}
		for(int i : b) cout<<i<<' ';
		cout<<'\n';
	}
}