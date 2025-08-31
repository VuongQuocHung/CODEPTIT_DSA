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

const int mod = 1e9 + 7;

ll powMode(int n, int k){
	if(k == 0) return 1;
	ll x = powMode(n, k/2);
	if(k % 2 == 0) return (x * x) % mod;
	return ((x * x % mod) * (n % mod)) % mod;
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
		int n, k; 
		cin >> n >> k;
		cout << powMode(n, k) << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//