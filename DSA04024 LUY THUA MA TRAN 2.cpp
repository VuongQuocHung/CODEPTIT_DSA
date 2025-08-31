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

struct matrix{
	ll mt[11][11];
	int n;
	friend matrix operator * (matrix a, matrix b){
		matrix res;
		res.n = a.n;
		FOR(i, 1, a.n){
			FOR(j, 1, a.n){
				res.mt[i][j] = 0;
				FOR(k, 1, a.n){
					res.mt[i][j] += a.mt[i][k] * b.mt[k][j];
					res.mt[i][j] %= mod;
				}
			}
		}
		return res;
	}
};

matrix binPow(matrix a, int k){
	if(k == 1) return a;
	matrix x = binPow(a, k/2);
	if(k % 2 == 0)
		return x * x;
	return a * x * x;
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
		int n, k; cin >> n >> k;
		matrix x;
		x.n = n;
		FOR(i, 1, n) FOR(j, 1, n) cin >> x.mt[i][j];
		matrix res = binPow(x, k);
		ll ans = 0;
		FOR(i, 1, n){
			ans += res.mt[i][n];
			ans %= mod;
		}
		cout << ans << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//