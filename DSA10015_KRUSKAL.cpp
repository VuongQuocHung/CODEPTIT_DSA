#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define ms(a, b) memset(a, b, sizeof(a))
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, m, u, visited[1005], parent[1005], sz[1005];
vector<ii> ke[1005];

struct Edge {
	int u, v, w;
	bool operator < (Edge x){
		return this->w < x.w;
	}
};

vector<Edge> ds_canh;

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int u, v, w;
		cin >> u >> v >> w;
		ds_canh.pb({u, v, w});
	}
	sort(all(ds_canh));
	FOR(i, 1, n){
		parent[i] = i;
		sz[i] = 1;
	}
}

void reset(){
	ds_canh.clear();
}

int Find(int u){
	if(u == parent[u]) return u;
	else return parent[u] = Find(parent[u]);
}

bool Union(int u, int v){
	u = Find(u); v = Find(v);
	if(u == v) return 0;
	if(sz[u] < sz[v]) swap(u, v);
	parent[v] = u;
	sz[u] += sz[v];
	return 1;
}

void Kruskal(){
	vector<Edge> MST;
	int d = 0;
	for(auto e : ds_canh){
		if(MST.size() == n - 1) break;
		if(Union(e.u, e.v)){
			MST.pb(e);
			d = d + e.w;
		}
	} 
	cout << d << endl;
}

int main(){
	faster();
	
	int T; cin >> T;
	while(T--){
		reset();
		nhap();
		Kruskal();
	}
}