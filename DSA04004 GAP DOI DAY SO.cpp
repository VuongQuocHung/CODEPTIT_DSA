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

ll powMod(ll a, ll n){
	if(n == 0) return 1;
	ll x = powMod(a, n/2);
	if(n % 2 == 0) return x * x;
	return x * x * a;
}

ll Find(ll n, ll k){
	// tìm vị trí của n trong dãy số sau khi đã gấp đôi n - 1 lần
	ll mid = powMod(2, n - 1);
	if(k < mid) return Find(n - 1, k);
	if(k == mid) return n;
	return Find(n - 1, k - mid);
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
		cin >> n >> k;
		cout << Find(n, k) << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//