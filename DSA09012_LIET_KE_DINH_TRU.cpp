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

int n, m, visited[1005];
vector<int> ke[1005];

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

void dfs(int u){
	visited[u] = 1;
	for(int v : ke[u])
		if(!visited[v]) dfs(v);
}

int dem_tplt(){
	int cnt = 0;
	FOR(i, 1, n){
		if(!visited[i]){
			++cnt;
			dfs(i);
		}
	}
	return cnt;
}

void solve(){
	int tplt = dem_tplt();
	FOR(i, 1, n){
		memset(visited, 0, sizeof(visited));
		visited[i] = 1;
		if(tplt < dem_tplt()) cout << i << ' ';
	}
	cout << endl;
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
		FOR(i, 1, n) ke[i].clear();
		memset(visited, 0, sizeof(visited));
		nhap();
		solve();
	}

	return 0;
}
