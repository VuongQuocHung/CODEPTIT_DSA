#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(O);

ll chiaDu(string a, ll m){
	ll mod = 0;
	for(char c : a){
		mod = (mod * 10 + c - '0') % m;
	}
	return mod;
}

ll BinPow(ll a, ll n, ll m){
	if(n == 0) return 1;
	ll x = BinPow(a, n/2, m);
	if(n % 2 == 0) return (x * x) % m;
	return ((a % m) * ((x * x) % m)) % m;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin.ignore();
		string a;
		ll b, m;
		cin >> a >> b >> m;
		cout << BinPow(chiaDu(a, m), b, m) << '\n';
	}
}