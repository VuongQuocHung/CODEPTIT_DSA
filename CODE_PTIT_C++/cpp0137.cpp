#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll snt(ll n){
	if(n<2) return 0;
	for(ll  i=2; i<=sqrt(n); i++){
		if( n%i == 0) return 0;
	}
	return 1;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll a, b; cin>>a>>b;
		if(a>b){
			ll k = a; a = b; b = k;
		}
		int cnt = 0;
		ll x = sqrt(a), y = sqrt(b);
		if(x*x<a) x++;
		for(ll i=x; i<=y; i++){
			if(snt(i)) ++cnt;
		}
		cout<<cnt<<"\n";
	}
}