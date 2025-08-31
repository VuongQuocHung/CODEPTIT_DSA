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

int n, m, visited[1005], parent[1005];
vector<int> ke[1005];

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
	FOR(i, 1, n) parent[i] = i;
}

void reset(){
	memset(visited, 0, sizeof(visited));
	memset(parent, 0, sizeof(parent));
	FOR(i, 1, n) ke[i].clear();
}

bool dfs(int u){
	visited[u] = 1;
	for(int v : ke[u]){
		if(visited[v] && v != parent[u]) 
			return true;
		else if(!visited[v]){
			parent[v] = u;
			if(dfs(v)) return true;
		}
	}
	return false;
}

int Find(int u){
	while(u != parent[u]) u = parent[u];
	return u;
}

bool Union(int u, int v){
	u = Find(u); v = Find(v);
	if(u == v) return false;
	if(u < v) parent[v] = u;
	else parent[u] = v;
	return true;
}

void solve1(){
	nhap();
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

void solve2(){
	cin >> n >> m;
	FOR(i, 1, n) parent[i] = i;
	int check = 0;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
		if(!Union(x, y)) check = 1;
	}
	if(check) cout << "YES\n";
	else cout << "NO\n";
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
		solve2();
	}

	return 0;
}
