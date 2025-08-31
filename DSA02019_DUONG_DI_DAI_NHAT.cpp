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

int n, m, visited[1005][1005];
vector<int> ke[1005];

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

int max_length = -1;
void dfs(int u, int length){
	max_length = max(length, max_length);
	for(int v : ke[u]){
		if(!visited[u][v]){
			visited[u][v] = visited[v][u] = 1;
			cout << u << ' ' << v << ' ' << length << endl;
			dfs(v, length + 1);
			visited[u][v] = visited[v][u] = 0;
		}
	}
}

void reset(){
	memset(visited, 0, sizeof(visited));
	FOR(i, 0, n - 1) ke[i].clear();
	max_length = 0;
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
		FOR(i, 0, n - 1){
			memset(visited, 0, sizeof(visited));
			dfs(i, 0);
		}
		cout << max_length << endl;
	}

	return 0;
}
