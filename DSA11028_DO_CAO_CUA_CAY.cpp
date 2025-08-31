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

int n, visited[100005];
vector<int> ke[100005];

int ans = -1e9;
void dfs(int u, int depth){
	visited[u] = 1;
	ans = max(ans, depth);
	for(int v : ke[u])
		if(!visited[v]) dfs(v, depth + 1);
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
		memset(visited, 0, sizeof(visited));
		FOR(i, 1, 100005) ke[i].clear();
		cin >> n;
		FOR(i, 1, n - 1){
			int x, y; cin >> x >> y;
			ke[x].pb(y); ke[y].pb(x);
		}
		ans = -1e9;
		dfs(1, 0);
		cout << ans << endl;
	}

	return 0;
}
