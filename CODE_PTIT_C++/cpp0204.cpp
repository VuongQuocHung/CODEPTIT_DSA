#include <bits/stdc++.h>
using namespace std;
int snt(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void solve(){
	int l,r ; cin>>l>>r; int cnt = 0;
	for(int i=l; i<r; i++){
		if(snt(i)) cnt++;
	}
	cout<<cnt<<"\n";
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}