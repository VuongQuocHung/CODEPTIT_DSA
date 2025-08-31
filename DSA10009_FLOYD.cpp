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

int d[10005][10005];

void nhap(){
	cin >> n >> m;
	FOR(i, 1, n){
		FOR(j, 1, n) d[i][j] = 1e9;
		d[i][i] = 0;
	}
	FOR(i, 1, m){
		int x, y, w; 
		cin >> x >> y >> w;
		d[x][y] = d[y][x] = w;
	}
}

void floyd(){
	FOR(k, 1, n){
		FOR(i, 1, n){
			FOR(j, 1, n) d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
		}
	}
}

int main(){
	faster();
	
	nhap();
	floyd();
	int q; cin >> q;
	while(q--){
		int x, y;
		cin >> x >> y;
		cout << d[x][y] << endl;
	}
	
	return 0;
}