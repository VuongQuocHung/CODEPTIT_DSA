#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll modul(ll a, ll b, ll c){
	ll res = 0;
	a = a % c;
	while(b != 0){
		if(b % 2 == 1){
			res = (res % c) + (a % c);
			res %= c;
		}
		b = b/2;
		a = (a * 2) % c;
	}
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll a, b, c; cin >> a >> b >> c;
		cout << modul(a, b , c) << '\n';
	}
}