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
struct matran{
	ll a[3][3];
	friend matran operator *(matran x, matran y){
		matran res;
		for(int i = 1; i <= 2; i++){
			for(int j = 1; j <= 2; j++){
				ll tmp = 0;
				for(int k = 1; k <= 2; k++){
					tmp += x.a[i][k] * y.a[k][j];
					tmp %= mod;
				}
				res.a[i][j] = tmp;
			}
		}
		return res;
	}
};

matran Pow(matran x, ll n){
	if(n == 1)
		return x;
	matran tmp = Pow(x, n/2);
	if(n % 2 == 0)
		return tmp * tmp;
	else
		return tmp * tmp * x;
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
		ll n; cin >> n;
		matran x;
		for(int i = 1; i <= 2; i++){
			for(int j = 1; j <= 2; j++) 
				x.a[i][j] = 1;
		}
		x.a[2][2] = 0;
		matran y = Pow(x, n);
		cout << y.a[1][2] << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//