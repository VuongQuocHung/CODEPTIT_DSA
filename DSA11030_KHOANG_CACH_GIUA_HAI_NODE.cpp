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

int visited[1000005];
vector<int> ke[1000005];
bool ok = 0;
int res;

void dfs(int u, int cnt, int v){
	if(ok) return;
	if(u == v){
		res = cnt;
		ok = 1;
		return;
	}
	visited[u] = 1;
	for(int x : ke[u]) if(!visited[x]) dfs(x, cnt + 1, v);
}

void reset(){
	memset(visited, 0, sizeof(visited));
	FOR(i, 1, 1000005) ke[i].clear();
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
		int n; cin >> n;
		FOR(i, 1, n - 1){
			int x, y; 
			cin >> x >> y;
			ke[x].pb(y); ke[y].pb(x);
		}
		int q; 
		cin >> q;
		while(q--){
			res = 0;
			ok = false;
			memset(visited, 0, sizeof(visited));
			int u, v; cin >> u >> v;
			dfs(u, 0, v);
			cout << res << endl;
		}
	}

	return 0;
}
