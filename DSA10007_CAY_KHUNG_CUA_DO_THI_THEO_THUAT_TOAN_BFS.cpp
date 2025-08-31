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

int n, m, u, visited[1005];
vector<int> ke[1005];
vector<ii> cay_khung;

void bfs(int u){
	queue<int> Q;
	Q.push(u);
	visited[u] = 1;
	while(!Q.empty()){
		int x = Q.front(); Q.pop();
		for(int v : ke[x]){
			if(!visited[v]){
				Q.push(v);
				cay_khung.pb({x, v});
				visited[v] = 1;
			}
		}
	}
}

void build(int u){
	bfs(u);
	if(cay_khung.size() < n - 1) cout << -1 << endl;
	else{
		for(ii x : cay_khung) cout << x.fi << ' ' << x.se << endl;
	}
}

void reset(){
	FOR(i, 1, n) ke[i].clear();
	cay_khung.clear();	
	ms(visited, 0);
}

int main(){
	faster();
	
	int T; cin >> T;
	while(T--){
		reset();
		cin >> n >> m >> u;
		FOR(i, 1, m){
			int x, y; cin >> x >> y;
			ke[x].pb(y); ke[y].pb(x);
		}
		build(u);
	}
	
	return 0;
}