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

int n, m, parent[1005], visited[1005];
vector<int> ke[1005];

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

bool dfs(int u){
	visited[u] = 1;
	for(int v : ke[u]){
		if(!visited[v]){
			parent[v] = u;
			if(dfs(v)) return true;
		}
		else if(v != parent[u]) return true;
	}
	return false;
}

void solve(){
	FOR(i, 1, n){
		if(!visited[i]){
			if(dfs(i)){
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
}

void reset(){
	FOR(i, 1, n) ke[i].clear();
	memset(visited, 0, sizeof(visited));
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
		reset();
		nhap();
		solve();
	}

	return 0;
}
