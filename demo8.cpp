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

int n, m, u, a[1005][1005];
vector<int> ke[1005];

void nhap1(){
	cin >> n >> m >> u;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

void nhap2(){
	cin >> n >> m >> u;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
}

int visited[1005];
void dfs(int u){
	cout << u << ' ';
	visited[u] = 1;
	for(int v : ke[u]){
		if(!visited[v]) dfs(v);
	}
}

int main(){
	faster();
	int t;
	cin >> t;
	while(t--){
		memset(visited, 0, sizeof(visited));
		FOR(i, 1, n) ke[i].clear();
		nhap1();
		dfs(u);
		cout << endl;
	}

	return 0;
}
