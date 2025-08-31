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

int n, m, a[1005][1005];
vector<int> ke[1005];

struct Canh {
	int x, y, w;
};

vector<Canh> canh;

void input(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y, w; 
		cin >> x >> y >> w;
		a[x][y] = w;
		canh.pb({x, y, w});
	}
}

int d[1005], parent[1005];
bool BellmanFord(int s){
	d[s] = 0;
	FOR(i, 1, n - 1){
		for(auto c : canh){
			int u = c.x, v = c.y, w = c.w;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				parent[v] = u;
			}
		}
	}
	for(auto c : canh){
		int u = c.x, v = c.y, w = c.w;
		if(d[v] > d[u] + w){
			return true;
		}
	}
	return false;
}

bool check(){
	FOR(i, 1, n){
		d[i] = 1e9;
		parent[i] = -1;
	}
	FOR(i, 1, n){
		if(d[i] == 1e9){
			if(BellmanFord(i)) return true;
		}
	}
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
		input();
		if(check()) cout << 1 << endl;
		else cout << 0 << endl;
		canh.clear();
	}

	return 0;
}
