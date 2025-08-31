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

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

bool visited[1005];
vector<int> ke[1005];
int n, m, u;

void nhap(){
	cin >> n >> m >> u;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

void dfs(int u){
	visited[u] = 1;
	cout << u << ' ';
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
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
		nhap();
		dfs(u);
		cout << endl;
		memset(visited, 0, sizeof(visited));
		for(int i = 1; i <= n; i++){
    		ke[i].clear();
		}
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//