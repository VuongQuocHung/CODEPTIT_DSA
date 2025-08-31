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

int n, c, w[1005];
ll dp[25000]; // dp[i] : khối lượng bò lớn nhất và không vượt quá i

void solve(){
	cin >> c >> n;
	for(int i = 1; i <= n; i++) cin >> w[i];
	sort(w + 1, w + n + 1);
	for(int i = 1; i <= n; i++){
		for(int j = c; j >= w[i]; j--){
			dp[j] = max(dp[j], dp[j - w[i]] + w[i]);
		}
	}
	cout << dp[c] << endl;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	solve();

	return 0;
}

//_______________________________B23DCCN375_______________________________//