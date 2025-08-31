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

int v, e, u;
vector<int> ke[1005];
vector<ii> ds_canh;

void nhap(){
	cin >> v >> e >> u;
	FOR(i, 1, e){
		int x, y; 
		cin >> x >> y;
		ke[x].pb(y);
	}
}

bool visited[1005];

void dfs(int u){
	cout << u << ' ';
	visited[u] = 1;
	for(int x : ke[u]){
		if(!visited[x])
			dfs(x);
	}
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
		memset(visited, 0, sizeof(visited));
		FOR(i, 1, 1005) ke[i].clear();
		nhap();
		dfs(u);
		cout << endl;
	}

	return 0;
}
