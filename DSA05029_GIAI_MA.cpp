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

int giai_ma(string &s){
	// nếu bắt đầu là số 0 thì ko có cách giải mã nào
	if(s[0] == '0') return 0;
	int dp[100005] = {0}; // dp[i] lưu số cách giải mã từ đoạn s[0] đên s[i - 1]
	dp[0] = dp[1] = 1;
	for(int i = 2; i <= s.size(); i++){
		if(s[i - 1] > '0') dp[i] = dp[i - 1];
		if(s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6')) dp[i] += dp[i - 2];
	}
	return dp[s.size()];
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
		string s; 
		cin >> s;
		cout << giai_ma(s) << endl;
	}

	return 0;
}
