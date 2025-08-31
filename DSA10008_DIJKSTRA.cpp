#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define ms(a, b) memset(a, b, sizeof(a))
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, m, u, visited[1005];
vector<ii> ke[1005];

void nhap(){
	cin >> n >> m >> u;
	FOR(i, 1, m){
		int u, v, w;
		cin >> u >> v >> w;
		ke[u].pb({v, w}); ke[v].pb({u, w});
	}
}

int d[1005], parent[1005];

void reset(){
	FOR(i, 1, n) ke[i].clear();
}

void dijktra(int s){
	priority_queue<ii, vector<ii>, greater<ii>> pq;
	FOR(i, 1, n) d[i] = 1e9;
	d[s] = 0;
	pq.push({0, s});
	while(!pq.empty()){
		ii dau = pq.top(); pq.pop();
		int dis = dau.fi, u = dau.se;
		if(dis > d[u]) continue;
		for(ii v : ke[u]){
			int dinh = v.fi, trong_so = v.se;
			if(d[dinh] > d[u] + trong_so){
				parent[dinh] = u;
				d[dinh] = d[u] + trong_so;
				pq.push({d[dinh], dinh});
			}
		}
	}
	FOR(i, 1, n){
		if(i == s) cout << 0 << ' ';
		else cout << d[i] << ' ';
	}
	cout << endl;
}	

int main(){
	faster();
	
	int T; cin >> T;
	while(T--){
		reset();
		nhap();
		dijktra(u);
	}
}