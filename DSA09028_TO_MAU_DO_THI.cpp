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

int v, e, m, parent[1005], color[1005];
vector<int> ke[1005];

void nhap(){
	cin >> v >> e >> m;
	FOR(i, 1, e){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

bool check(int u, int c){ // kiểm tra có thể tô màu đỉnh u là c không bằng cách xem xem các
						  // đỉnh kề với u có đỉnh màu có màu là c chưa
	for(int v : ke[u])
		if(color[v] == c) return false;
	return true;
}

bool dfs(int u){
	if(u == v + 1) return true;
	for(int c = 1; c <= m; c++){
		if(check(u, c)){
			color[u] = c;
			if(dfs(u + 1)) return true;;
			color[u] = 0;
		}
	}
	return false;
}

void reset(){
	FOR(i, 1, v) ke[i].clear();
	memset(color, 0, sizeof(color));
}

int main(){
	faster();
	
	int T;
	cin >> T;
	while(T--){
		reset();
		nhap();
		if(dfs(1)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
