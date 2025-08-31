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

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		int n; cin >> n; int a[n + 1];
		FOR(i, 1, n) cin >> a[i];
		int dp[n + 1] = {0};
		dp[0] = 0;
		dp[1] = a[1];
		if(n >= 2){
			dp[2] = max(a[1], a[2]);
			FOR(i, 3, n) dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
		}
		cout << dp[n] << endl;
	}

	return 0;
}
