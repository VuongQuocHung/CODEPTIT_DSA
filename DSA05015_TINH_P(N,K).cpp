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

int n, k;
const int mod = 1e9 + 7;
ll dp[1005][1005];

ll gt[1005];

void calc(){
	ll res = 1;
	if(n < k){
		cout << 0;
		return;
	}
	FOR(i, 0, k - 1){
		res *= (n - i);
		res %= mod;
	}
	cout << res << endl;
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
		cin >> n >> k;
		calc();
	}

	return 0;
}

//________________________________H_Ư_N_G_______________________________//