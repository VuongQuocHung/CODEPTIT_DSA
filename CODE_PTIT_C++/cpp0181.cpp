#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd( ll a, ll b){
	if(a==0 || b==0) return a+b;
	while(b > 0){
		ll x = a%b;
		a = b;
		b = x;
	}
	return a;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll a, x, y; cin >> a >> x >> y;
		ll ucln = gcd(x, y);
		for(int i = 0; i < ucln; i++) cout << a;
		cout << '\n';
	}
	
}