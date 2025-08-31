#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, m, parent[1005], sz[1005];

int Find(int u){
	if(u == parent[u]) return u;
	else return parent[u] = Find(parent[u]);
}

bool Union(int u, int v){
	u = Find(u); v = Find(v);
	if(u == v) return 0;
	if(sz[u] < sz[v]) swap(u, v);
	sz[u] += sz[v];
	parent[v] = u;
	return 1;
}

int main(){
	faster();
	
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		FOR(i, 1, n){
			parent[i] = i;
			sz[i] = 1;
		}
		int co_chu_trinh = 0;
		FOR(i, 1, m){
			int x, y; cin >> x >> y;
			if(!Union(x, y)) co_chu_trinh = 1;
		}
		if(co_chu_trinh) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}