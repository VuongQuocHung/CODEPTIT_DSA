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

void solve(int a[], int n, int s){
	int dp[s + 5] = {0};
	dp[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = s; j >= a[i]; j--){
			if(dp[j - a[i]]) dp[j] = 1;
		}
	}
	if(dp[s]) cout << "YES\n";
	else cout << "NO\n";
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
		int n, s; 
		cin >> n >> s;
		int a[n + 1];
		FOR(i, 1, n) cin >> a[i];
		solve(a, n, s);
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//