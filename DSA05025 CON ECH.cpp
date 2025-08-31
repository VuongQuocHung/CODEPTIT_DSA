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

ll dp[105];

void init(){
	dp[0] = dp[1] = 1;
	dp[2] = 2; dp[3] = 4;
	for(int i = 4; i <= 50; i++){
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	init();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//