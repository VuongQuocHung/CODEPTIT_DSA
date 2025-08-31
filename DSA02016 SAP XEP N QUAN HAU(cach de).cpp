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

int n, dem = 0;
int a[100], visited[100];

int mod = 1e9 + 7;
ll powMod(ll a, ll n){
	if(n == 0) return 1;
	ll x = powMod(a, n/2);
	if(n % 2 == 0) return (x * x) % mod;
	return ((x * x % mod) * (a % mod)) % mod;
}

void Try(int pos){
	if(pos > n){
		int ok = 1;
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				if(abs(a[i] - a[j]) == abs(i - j)){
					ok = 0;
					break;
				}
			}
			if(!ok) break;
		}
		if(ok){
			// for(int i = 1; i <= n; i++)
			// 	cout << a[i] << ' ';
			// cout << '\n';
			++dem;
		}
	}
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			visited[i] = 1;
			a[pos] = i;
			Try(pos + 1);
			visited[i] = 0;
		}
	}
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
		cin >> n;
		dem = 0;
		memset(visited, 0, sizeof(visited));
		Try(1);
		cout << dem << endl;
	}

	return 0;
}
