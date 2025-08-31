#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
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

void nhan(int m, int n, ll p[], ll q[]){
	ll res[n + m] = {0};
	for(int i = m - 1; i >= 0; i--){
		for(int j = n - 1; j >= 0; j--){
			ll mul = p[i] * q[j];
			res[i + j + 1] += mul;
		}
	}
	int ok = 0;
	for(int i = 0; i < n + m; i++){
		if(res[i] != 0) ok = 1;
		if(ok) cout << res[i] << ' ';
	}
	cout << '\n';
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
		int m, n; cin >> m >> n;
		ll p[m], q[n];
		FOR(i, 0, m - 1) cin >> p[i];
		FOR(i, 0, n - 1) cin >> q[i];
		nhan(m, n, p, q);
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//