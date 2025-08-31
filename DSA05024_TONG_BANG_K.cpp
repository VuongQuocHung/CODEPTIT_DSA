#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
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

int n, k, a[10005];
const int mod = 1e9 + 7;

void solve(){
	ll dp[100005] = {0};
	dp[0] = 1;
	FOR(i, 1, k){
		FOR(j, 1, n){
			if(i >= a[j]){
				dp[i] += dp[i - a[j]];
				dp[i] %= mod;
			}
		}
	}
	cout << dp[k] << endl;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		FOR(i, 1, n) cin >> a[i];
		solve();
	}

	return 0;
}

//________________________________H_Ư_N_G_______________________________//