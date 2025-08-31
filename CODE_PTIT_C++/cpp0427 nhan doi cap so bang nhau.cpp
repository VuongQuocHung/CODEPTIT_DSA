#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n];
		for(int& i : a){
			cin>>i;
		}
		for(int i = 0; i < n - 1; i++){
			if( a[i+1] != 0 && a[i] == a[i+1]){
				a[i]*=2;
				a[i+1] = 0;
			}
		}
		int cnt_0 = 0;
		for(int i = 0; i < n; i++){
			if(a[i] == 0) ++cnt_0;
			else cout<<a[i]<<' ';
		}
		while(cnt_0--) cout<<"0 ";
		cout<<'\n';
	}
}