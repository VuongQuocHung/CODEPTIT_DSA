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

int Find(ll n){
	string s = to_string(n);
	set<int> mySet;
	for(char ch : s){
		mySet.insert(ch - '0');
	}
	auto last = --mySet.end();
	--last;
	return *last;
}

int main(){
	faster();
	int t;
	cin >> t;
	while(t--){
		ll l, r; cin >> l >> r;
		ll ans = 0;
		for(ll i = l; i <= r; i++){
			ans += Find(i);
			ans %= mod;
		}
		cout << ans << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//