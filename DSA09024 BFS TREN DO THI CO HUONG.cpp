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

int v, e, u, s, t;
vector<int> ke[1005];
vector<ii> ds_canh;

void nhap(){
	cin >> v >> e >> u;
	FOR(i, 1, e){
		int x, y; 
		cin >> x >> y;
		ke[x].pb(y);
	}
}

bool visited[1005];

void bfs(){
	queue<int> Q;
	Q.push(u);
	visited[u] = 1;
	while(!Q.empty()){
		int x = Q.front(); Q.pop();
		cout << x << ' ';
		if(x == t) return;
		for(int i : ke[x]){
			if(!visited[i]){
				Q.push(i);
				visited[i] = 1;
			}
		}
	}
}
int main(){
	faster();
	
	
	int t;
	cin >> t;
	while(t--){
		memset(visited, 0, sizeof(visited));
		FOR(i, 1, 1005) ke[i].clear();
		nhap();
		bfs();
		cout << endl;
	}

	return 0;
}
