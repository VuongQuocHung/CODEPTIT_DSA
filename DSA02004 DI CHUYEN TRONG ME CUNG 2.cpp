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

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};
int n, a[101][101];

char d[] = "DLRU";
string path;
int ok = 0;

void dfs(int i, int j){
	if(i == n && j == n){
		ok = 1;
		cout << path << ' ';
		return;
	}
	a[i][j] = 0;
	for(int k = 0; k <= 3; k++){
		int x = i + dx[k], y = j + dy[k];
		if(x >= 1 && x <= n && y >= 1 && y <= n && a[x][y] == 1){
			path.pb(d[k]);
			dfs(x, y);
			path.pop_back();
		}
	}
	a[i][j] = 1;
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
		ok = 0;
		path = "";
		cin >> n;
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				cin >> a[i][j];
		dfs(1, 1);
		if(!ok)
			cout << -1;
		cout << '\n';
	} 
	
	return 0;
}