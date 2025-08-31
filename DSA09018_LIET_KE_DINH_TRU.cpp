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

int n, m, a[1005][1005], visited[1005];
vector<int> ke[1005];
vector<ii> canh;

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

void dfs(int u){
	visited[u] = 1;
	for(int v : ke[u])
		if(!visited[v]) dfs(v);
}

int dem_tplt(){
	int cnt = 0;
	FOR(i, 1, n){
		if(!visited[i]){
			dfs(i);
			++cnt;
		}
	}
	return cnt;
}

vector<int> dinh_tru(){
	vector<int> dt;
	int tplt = dem_tplt();
	FOR(i, 1, n){
		memset(visited, 0, sizeof(visited));
		visited[i] = 1;
		if(tplt < dem_tplt()) dt.pb(i);
	}
	return dt;
}

void reset(){
	FOR(i, 1, n) ke[i].clear();
	memset(visited, 0, sizeof(visited));
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
		vector<int> dt = dinh_tru();
		for(int i : dt) cout << i << ' ';
		cout << endl;
	}

	return 0;
}
