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

int n, m,  parent[1005], color[1005]; /* color = 0 : đỉnh chưa thăm
											   = 1 : đỉnh đang thăm
											   = 2 : đỉnh đã thăm  */ 
vector<int> ke[1005];

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y; 
		cin >> x >> y;
		ke[x].pb(y); 
	}
	FOR(i, 1, n) parent[i] = i;
}

void reset(){
	memset(color, 0, sizeof(color));
	memset(parent, 0, sizeof(parent));
	FOR(i, 1, n) ke[i].clear();
}

bool dfs(int u){
	color[u] = 1;
	for(int v : ke[u]){
		if(color[v] == 0){
			if(dfs(v)) return true;
		}
		else if(color[v] == 1) return true;
	}
	color[u] = 2;
	return false;
}

void solve1(){
	nhap();
	FOR(i, 1, n){
		if(!color[i]){
			if(dfs(i)){
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
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
		solve1();
	}

	return 0;
}
