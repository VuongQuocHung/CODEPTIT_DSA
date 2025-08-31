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

int n, k, mod = 1e9 + 7;
ll dp[1000005]; // dp[i] : số cách để bước lên bậc thứ i (tính từ 1)

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for(int i = 1; i <= n; i++){
			if(i <= k){
				for(int j = 0; j < i; j++){
					dp[i] += dp[j];
					dp[i] %= mod;
				}
			}else{
				for(int j = i - 1; j >= i - k; j--){
					dp[i] += dp[j];
					dp[i] %= mod;
				}
			}
		}
		cout << dp[n] << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//