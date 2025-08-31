#include <bits/stdc++.h>
using namespace std;
int check(int n){
	int cnt = 0;
	for(int i=2; i<=n; i++){
		if(n%i==0){
			++cnt;
			n/=i;
			if(n%i==0) return 0;
		}
		if(cnt==4) return 0;
	}
	if(cnt==3) return 1;
	return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<check(n)<<"\n";
	}
}