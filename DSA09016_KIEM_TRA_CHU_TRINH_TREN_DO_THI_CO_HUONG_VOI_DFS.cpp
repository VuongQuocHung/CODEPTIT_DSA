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

int n, m, s, e, color[1005], parent[1005];
vector<int> ke[1005];
vector<ii> canh;

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y;
		cin >> x >> y;
		ke[x].pb(y);
	}
}

void reset(){
	FOR(i, 1, n) ke[i].clear();
	memset(color, 0, sizeof(color));
}

bool dfs(int u){
	color[u] = 1;
	for(int v : ke[u]){
		if(color[v] == 0){
			parent[v] = u;
			if(dfs(v)) return true;
		}
		else if(color[v] == 1){
			s = v; e = u;
			return true;
		}
	}
	color[u] = 2;
	return false;
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
		int ok = 0;
		FOR(i, 1, n){
			if(color[i] == 0){
				if(dfs(i)){
					cout << "YES\n";
					ok = 1;
					break;
				}
			}
		}
		if(!ok) cout << "NO\n";
	}

	return 0;
}
