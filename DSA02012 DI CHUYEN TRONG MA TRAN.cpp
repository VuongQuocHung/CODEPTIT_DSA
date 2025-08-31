#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define fspr fixed << setprecision
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define _Vuong_Quoc_Hung_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int m, n, a[105][105];

void nhap(){
	cin >> m >> n;
	FOR(i, 1, m) FOR(j, 1, n) cin >> a[i][j];
}

int cnt = 0;

void dfs(int i, int j){
	if(i == m && j == n){
		++cnt;
		return;
	}
	if(i + 1 <= m && j <= n)
		dfs(i + 1, j);
	if(i <= m && j + 1 <= n)
		dfs(i, j + 1);
}

int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		nhap();
		dfs(1, 1);
		cout << cnt << '\n';
		cnt = 0;
	}
	
	return 0;
}