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

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	int a = 0, b = 0, c = 0;
	ll dp[10005];
	dp[0] = 1;
	FOR(i, 1, 10000){
		dp[i] = min({dp[a] * 2, dp[b] * 3, dp[c] * 5});
		if(dp[i] == dp[a] * 2) ++a;
		if(dp[i] == dp[b] * 3) ++b;
		if(dp[i] == dp[c] * 5) ++c;
	}
	while(T--){
		int n; cin >> n;
		cout << dp[n - 1] << endl;
	}

	return 0;
}

//________________________________H_Ư_N_G_______________________________//