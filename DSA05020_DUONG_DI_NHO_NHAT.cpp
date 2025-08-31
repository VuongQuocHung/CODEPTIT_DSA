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

int n, m, a[1005][1005];

void solve(){
	int dp[505][505] = {};
	FOR(i, 1, n){
		FOR(j, 1, m){
			if(i == 1) dp[i][j] = dp[i][j - 1]+ a[i][j];
			else if(j == 1) dp[i][j] = dp[i - 1][j] + a[i][j];
			else dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + a[i][j];
		}
	}

	cout << dp[n][m] << endl;
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
		cin >> n >> m;
		FOR(i, 1, n) FOR(j, 1, m) cin >> a[i][j];
		solve();
	}

	return 0;
}

//________________________________H_Ư_N_G_______________________________//