#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, m, s, e ,visited[1005], parent[1005];
vector<int> ke[1005];
int ok;
string res;

void DFS(int u, string s, int par){
	if(ok)	return;
	visited[u] = 1;
	for(int v : ke[u]){
		if(!visited[v]) DFS(v, s + " " + to_string(v), u);
		else if(v != par && v == 1) ok = 1, res = s;
	}
}

void reset(){
	FOR(i, 1, n) ke[i].clear();
	memset(visited, 0, sizeof(visited));
}

int main(){
	faster();
	
	int t; cin >> t;
	while(t--){
		reset();
		cin >> n >> m;
		FOR(i, 1, m){
			int x, y; cin >> x >> y;
			ke[x].pb(y); ke[y].pb(x);
		}
		FOR(i, 1, n) sort(all(ke[i]));
		ok = 0;	
		DFS(1, "1", 0);
		if(!ok) cout << "NO\n";
		else cout << res << " " << 1 << endl;
	}
	
	return 0;
}
