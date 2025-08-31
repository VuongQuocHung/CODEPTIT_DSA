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

int v, e, s, t;
vector<int> ke[1005];

void nhap(){
	cin >> v >> e >> s >> t;
	FOR(i, 1, e){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
	FOR(i, 1, v) sort(all(ke[i]));
}

int visited[1005], parent[1005];

void reset(){
	memset(visited, 0, sizeof(visited));
	memset(parent, 0, sizeof(parent));
	FOR(i, 1, v) ke[i].clear();
}

void bfs(int u){
	queue<int> Q;
	Q.push(u);
	visited[u] = 1;
	parent[u] = -1;
	while(!Q.empty()){
		int x = Q.front(); Q.pop();
		if(x == t){
			return;
		}
		for(int i : ke[x]){
			if(!visited[i]){
				Q.push(i);
				visited[i] = 1;
				parent[i] = x;
			}
		}
	}
}

void in(){
	if(!visited[t]) cout << -1 << endl;
	else{
		vector<int> path;
		for(int i = t; i != -1; i = parent[i]){
			path.pb(i);
		}
		reverse(all(path));
		for(int i : path)
			cout << i << ' ';
		cout << endl;
	}
}

int main(){
	faster();
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	
	int t;
	cin >> t;
	while(t--){
		reset();
		nhap();
		bfs(s);
		in();
	}

	return 0;
}
