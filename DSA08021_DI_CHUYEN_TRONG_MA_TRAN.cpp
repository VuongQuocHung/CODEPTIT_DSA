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

int m, n, a[105][105];

int solve(){
	queue<ii> Q;
	Q.push({1, 1});
	int d[105][105] = {};
	d[1][1] = 0;
	while(!Q.empty()){
		auto x = Q.front(); Q.pop();
		int i = x.fi, j = x.se, A = a[i][j];

		if(i + A <= m && !d[i + A][j]){
			d[i + A][j] = d[i][j] + 1;
			if(i + A == m && j == n) return d[i][j] + 1;
			Q.push({i + A, j});
		}

		if(j + A <= n && !d[i][j + A]){
			d[i][j + A] = d[i][j] + 1;
			if(i == m && j + A == n) return d[i][j] + 1;
			Q.push({i, j + A});
		}
	}
	return -1;
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
		cin >> m >> n;
		FOR(i, 1, m) FOR(j, 1, n) cin >> a[i][j];
		cout << solve() << endl;
	}

	return 0;
}