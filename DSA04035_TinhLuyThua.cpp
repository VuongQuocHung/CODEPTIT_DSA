#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/************************ MADE BY VƯƠNG QUỐC HƯNG ************************/

const int mod = 1e9 + 7;
ll powMod(ll n, ll k){
	if(k == 0) return 1;
	ll x = powMod(n, k/2);
	if(k % 2 == 0) return (x * x) % mod;
	return ((x * x % mod) * (n % mod)) % mod;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	while(1){
		ll a, b;
		cin >> a >> b;
		if(a == 0 && b == 0) break;
		cout << powMod(a, b) << endl;
	}

	return 0;
}
