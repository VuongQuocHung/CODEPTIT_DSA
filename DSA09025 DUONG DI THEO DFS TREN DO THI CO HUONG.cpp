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

int v, e, s, t;
vector<int> ke[1005];

void nhap(){
	cin >> v >> e >> s >> t;
	FOR(i, 1, e){
		int x, y;
		cin >> x >> y;
		ke[x].pb(y);
	}
}

bool visited[1005];
vector<int> path;
int found = 0;

void dfs(int u){
	if(found) return;

	visited[u] = 1;
	path.pb(u);

	if(u == t){
		found = 1;
		return;
	}

	for(int x : ke[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
	if(!found) path.pop_back();
}

int main(){
	faster();
	
	int t;
	cin >> t;
	while(t--){
		memset(visited, 0, sizeof(visited));
		FOR(i, 1, 1005) ke[i].clear();
		found = 0;
		path.clear();
		nhap();
		dfs(s);
		if(!found) cout << -1 << endl;
		else{
			for(int x : path)
				cout << x << ' ';
			cout << endl;
		}
	}

	return 0;
}
