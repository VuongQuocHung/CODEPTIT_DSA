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

int n, m;
vector<int> ke[1005];
vector<ii> ds_canh;

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
		ds_canh.pb({x, y});
	}
	FOR(i, 1, n) sort(all(ke[i]));
}

bool visited[1005];
void dfs(int u, int x, int y){
	visited[u] = 1;
	for(int v : ke[u]){
		if((u == x && v == y) || (u == y && v == x)){
			continue;
		}
		if(!visited[v]){
			dfs(v, x, y);
		}
	}
}

int dem_so_tplt(int x, int y){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dfs(i, x, y);
			++dem;
		}
	}
	return dem;
}

vector<ii> canh_cau;
void tim_canh_cau(){
	int so_tplt = dem_so_tplt(-1, -1);
	for(ii canh : ds_canh){
		int x = canh.fi, y = canh.se;
		memset(visited, false, sizeof(visited));
		if(so_tplt < dem_so_tplt(x, y)){
			canh_cau.pb({x, y});
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
		tim_canh_cau();
		sort(all(canh_cau));
		for(ii canh : canh_cau){
			cout << canh.fi << ' ' << canh.se << ' ';
		}
		cout << endl;
		canh_cau.clear();
		ds_canh.clear();
		for(int i = 1; i <= n; i++) ke[i].clear();
		memset(visited, 0, sizeof(visited));
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//