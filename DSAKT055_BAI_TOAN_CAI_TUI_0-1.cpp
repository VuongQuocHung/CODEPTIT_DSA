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

int n, v, w[1005], c[1005];
int dp[1005][1005];

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		cin >> n >> v;
		FOR(i, 1, n) cin >> w[i];
		FOR(i, 1, n) cin >> c[i];
		FOR(i, 1, n){
			for(int j = 1; j <= v; j++){
				dp[i][j] = dp[i - 1][j];
				if(j - w[i] >= 0){
					dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + c[i]);
 				}
			}
		}
		cout << dp[n][v] << endl;
	}

	return 0;
}
