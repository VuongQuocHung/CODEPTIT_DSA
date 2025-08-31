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

int n, x, y, z; // x : timeviết 1 ký tự, y : time xoá ký tự cuối, z : time copy + paste

void solve(){
	int dp[1005] = {0}; // dp[i] : số bước ít nhất để viết được i ký tự giống nhau
	dp[1] = x;
	FOR(i, 2, n){
		// nếu i là số chẵn, ta lấy min của số bước ít nhất khi viết i - 1 ký tự + x
		// và số bước ít nhất khi nhân đôi i/2 ký tự
		if(i % 2 == 0) dp[i] = min(dp[i - 1] + x, dp[i/2] + z);
		// nếu i lẻ, ta lấy min với số bước khi nhân đôi (i+1)/2 ký tự và xoá bỏ ký tự cuối
		else dp[i] = min(dp[i - 1] + x, dp[(i + 1)/2] + y + z);
	}
	cout << dp[n] << endl;
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
		cin >> n >> x >> y >> z;
		solve();
	}

	return 0;
}

//________________________________H_Ư_N_G_______________________________//