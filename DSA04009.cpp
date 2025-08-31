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
	int n;
	ll value[105][105];
	friend matrix operator * (matrix a, matrix b){
		matrix result;
		result.n = a.n;
		for(int i = 1; i <= a.n; i++){
			for(int j = 1; j <= a.n; j++){
				result.value[i][j] = 0;
				for(int k = 1; k <= a.n; k++){
					result.value[i][j] += a.value[i][k] * b.value[k][j];
					result.value[i][j] %= mod; 
				}
			}
		}
		return result;
	}
};

matrix binPow(matrix x, int k){
	if(k == 1) return x;
	matrix y = binPow(x, k/2);
	if(k % 2 == 0)
		return y * y;
	return y * y * x;
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
		matrix x;
		x.n = n;
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				cin >> x.value[i][j];

		matrix ans = binPow(x, k);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++)
				cout << ans.value[i][j] << ' ';
			cout << '\n';
		}
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//