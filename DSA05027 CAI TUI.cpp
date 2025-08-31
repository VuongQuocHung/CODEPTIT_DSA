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

int n, v, a[1005], c[1005]; // thể tích và giá trị của đồ vật
ll dp[1005][1005]; // dp[i][j] : lượng giá trị lớn nhất lấy từ i đồ vật và không vượt quá j

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		cin >> n >> v;
		FOR(i, 1, n) cin >> a[i];
		FOR(i, 1, n) cin >> c[i];
		memset(dp, 0, sizeof(dp));
		FOR(i, 1, n){
			FOR(j, 0, v){
				dp[i][j] = dp[i - 1][j];
				if(a[i] <= j){
					dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + c[i]);
				}
			}
		}
		cout << dp[n][v] << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//