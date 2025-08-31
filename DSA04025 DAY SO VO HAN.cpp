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
	ll mt[2][2];
	friend matrix operator * (matrix x, matrix y){
		matrix ans;
		FOR(i, 0, 1){
			FOR(j, 0, 1){
				ans.mt[i][j] = 0;
				FOR(k, 0, 1){
					ans.mt[i][j] += x.mt[i][k] * y.mt[k][j];
					ans.mt[i][j] %= mod;
				}
			}
		}
		return ans;
	}
};

matrix binPow(matrix a, int n){
	if(n == 1) return a;
	matrix x = binPow(a, n/2);
	if(n % 2 == 0)
		return x * x;
	return x * x * a;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	matrix x;
	FOR(i, 0, 1) FOR(j, 0, 1) x.mt[i][j] = 1;
	x.mt[1][1] = 0;
	while(t--){
		int n; cin >> n;
		matrix res = binPow(x, n);
		cout << res.mt[1][0] << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//