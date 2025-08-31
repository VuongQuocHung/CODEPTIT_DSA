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

ll dp[1005][1005];
const int mod = 1e9 + 7;

void init(){
	for(int i = 0; i <= 1000; i++){
		dp[i][i] = 1;
	}
	for(int i = 1; i <= 1000; i++){
		for(int j = 1; j <= i; j++){
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			dp[i][j] %= mod;
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
	init();
	while(t--){
		int n, k; 
		cin >> n >> k;
		cout << dp[n][k] << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//