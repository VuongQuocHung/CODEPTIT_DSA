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

int n, m, color[1005]; // color = 0 : chưa xét, = 1 : ở 1 bên, = 2 : ở bên còn lại
vector<int> ke[1005];
vector<vi> ds;

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

void reset(){
	FOR(i, 1, n) ke[i].clear();
	memset(color, 0, sizeof(color));
}

int ok = 1;
void dfs(int u, int c){ // u là đỉnh đang xét và c là màu của đỉnh u
	color[u] = c;
	for(int v : ke[u]){
		if(color[v] == 0) dfs(v, 3 - c);
		else if(color[v] == color[u]) ok = 0; // nếu 2 đỉnh kề nhau có cùng màu => NO
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
	T = 1;
	while(T--){
		reset();
		nhap();
		ok = 1;
		FOR(i, 1, n) if(!color[i]) dfs(i, 1);
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}

    return 0;
}
