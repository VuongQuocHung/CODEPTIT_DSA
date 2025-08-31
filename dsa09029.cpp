#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int n, m, visited[1005], x[1005];
vector<int> ke[1005];

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int u, v; cin >> u >> v;
		ke[u].pb(v); ke[v].pb(u);
	}
}

void reset(){
	FOR(i, 1, n) ke[i].clear();
	memset(visited, 0, sizeof(visited));
	memset(x, 0, sizeof(x));
}

bool found = false;

void dfs(int k, int s){
	for(int u : ke[x[k - 1]]){
		if(k == n + 1 && u == s){
			// In ra chu trình Hamilton
			FOR(i, 1, n) cout << x[i] << " ";
			cout << s << '\n';
			found = true;
		}
		else if(!visited[u]){
			x[k] = u;
			visited[u] = 1;
			dfs(k + 1, s);
			visited[u] = 0;
		}
	}
}

void Hamilton(){
	// Chỉ xét bắt đầu từ đỉnh 1 (hoặc 1 đỉnh cố định)
	int start = 1;
	x[1] = start;
	visited[start] = 1;
	found = false;
	dfs(2, start);

	if (!found) cout << "NO\n";
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	while(T--){
		reset();
		nhap();
		Hamilton();
	}
	return 0;
}
