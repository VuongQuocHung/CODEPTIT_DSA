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

int n, m, q;
vector<int> ke[1005];

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

int visited[1005];
int tplt[1005], cnt = 0;

void dfs(int u){
	visited[u] = 1;
	tplt[u] = cnt;
	for(int v : ke[u]){
		if(!visited[v])
			dfs(v);
	}
}

void reset(){
	cnt = 0;
	memset(visited, 0, sizeof(visited));
	memset(tplt, 0, sizeof(tplt));
	FOR(i, 1, n) ke[i].clear();
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		reset();
		nhap();
		FOR(i, 1, n){
			if(!visited[i]){
				++cnt;
				dfs(i);
			}
		}
		cin >> q;
		while(q--){
			int s, t;
			cin >> s >> t;
			if(tplt[s] == tplt[t]) cout << "YES\n";
			else cout << "NO\n";
		}
	}

	return 0;
}
