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

int v, e, s, t, visited[1005], parent[1005], found;
vector<int> ke[1005];

void reset(){
	FOR(i, 1, v) ke[i].clear();
	memset(visited, 0, sizeof(visited));
	memset(parent, -1, sizeof(parent));
	found = 0;
}

void nhap(){
	cin >> v >> e >> s >> t;
	FOR(i, 1, e){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

void dfs(int u){
	visited[u] = 1;
	if(u == t){
		found = 1;
		return;
	}
	for(int x : ke[u]){
		if(!visited[x] && !found){
			parent[x] = u;
			dfs(x);
		}
	}
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
		dfs(s);
		if(!found) cout << -1 << endl;
		else{
			vector<int> path;
			for(int i = t; i != -1; i = parent[i]){
				path.pb(i);
			}
			reverse(all(path));
			for(int &p : path)
				cout << p << ' ';
		}
		cout << endl;
	}

	return 0;
}
