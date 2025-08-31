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

int n, m, visited[1005], x[1005];
vector<int> ke[1005];
vector<vi> ds;

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

void reset(){
	FOR(i, 1, n) ke[i].clear();
	memset(visited, 0, sizeof(visited));
	memset(x, 0, sizeof(x));
	ds.clear();
}

bool ok = false;

void DFS(int u, int cnt){
	if(ok) return;
	x[cnt] = u;
	visited[u] = 1;
	if(cnt == n){
		vector<int> v(x + 1, x + n + 1);
		ds.pb(v);
		ok = true;
		return;
	}

	for(int v : ke[u]) if(!visited[v]) DFS(v, cnt + 1);
	visited[u] = 0;
}

int Hamilton(){
	FOR(i, 1, n){
		memset(visited, 0, sizeof(visited));
		ok = false;
		DFS(i, 1);
		if(ok) return 1;
	}
	return 0;
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
		cout << Hamilton() << endl;
		// for(auto v : ds){
		// 	FOR(i, 0, n - 1) cout << v[i] << ' ';
		// 	cout << endl;
		// }
	}

	return 0;
}
