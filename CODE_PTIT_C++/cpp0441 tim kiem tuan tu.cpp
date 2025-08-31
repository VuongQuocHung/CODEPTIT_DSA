#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n, x; cin>>n>>x; int a[n];
		for(int& i : a) cin>>i;
		int dem = -1;
		for(int i = 0; i < n; i++){
			if(a[i] == x){
				dem = i;
				break;
			}
		}
		if(dem == -1) cout<<"-1\n";
		else cout<<dem+1<<'\n';
	}
}
