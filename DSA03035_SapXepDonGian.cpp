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
	
	int n; cin >> n;
	int a[n];
	for(int &i : a)
		cin >> i;
	int dp[100005], res = 0;
	// dp[i] : độ dài dãy con tăng liên tiếp kết từ 0 đến a[i]
	for(int i = 0; i < n; i++){
		dp[a[i]] = dp[a[i] - 1] + 1;
		res = max(res, dp[a[i]]);
	}
	cout << n - res;

	return 0;
}
