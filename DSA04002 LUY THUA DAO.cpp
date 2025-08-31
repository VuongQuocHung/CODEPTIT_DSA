#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

int mod = 1e9 + 7;
ll powMod(ll n, ll k){
	if(k == 0) return 1;
	ll x = powMod(n, k/2);
	if(k % 2 == 0) return x % mod * x % mod;
	return x % mod * x % mod * n % mod;
	// if(k % 2 == 0) return ((x % mod) * (x % mod)) % mod;
	// return ((x % mod) * (x % mod)) % mod * (n % mod);
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		string s; cin >> s;
		n = stoll(s);
		reverse(s.begin(), s.end());
		k = stoll(s); 
		cout << powMod(n, k) << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//