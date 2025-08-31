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

/************************ MADE BY VƯƠNG QUỐC HƯNG ************************/

int n, k;
const int mod = 1e9 + 7;
ll dp[100005];

void solve(){
	memset(dp, 0, sizeof(dp));
	cin >> n >> k;
	dp[0] = 1;
	FOR(i, 1, n){
		for(int j = i - 1; j >= max(0, i - k); j--){
			dp[i] += dp[j];
			dp[i] %= mod;
		}
		// cout << "i = " << i << " dp[" << i << "] = " << dp[i] << endl;
	}
	cout << dp[n] << endl;
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
		solve();
	}

	return 0;
}
