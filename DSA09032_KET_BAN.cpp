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

int n, m, parent[100005], sz[100005];
vector<int> ke[100005];

int Find(int u){
	if(u == parent[u]) return u;
	else return parent[u] = Find(parent[u]);
}

void Union(int u, int v){
	u = Find(u); v = Find(v);
	if(u == v) return;
	if(sz[u] < sz[v]) swap(u, v);
	sz[u] += sz[v];
	parent[v] = u;
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
		cin >> n >> m;
		FOR(i, 1, n){
			parent[i] = i;
			sz[i] = 1;
		}
		FOR(i, 1, m){
			int x, y;
			cin >> x >> y;
			Union(x, y);
		}
		int ans = -1e9;
		FOR(i, 1, n) ans = max(ans, sz[parent[i]]);
		cout << ans << endl;
	}

	return 0;
}
