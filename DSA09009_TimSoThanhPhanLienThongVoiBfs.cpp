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

int v, e, visited[1005], cnt;
vector<int> ke[1005];

void reset(){
	FOR(i, 1, v) ke[i].clear();
	memset(visited, 0, sizeof(visited));
	cnt = 0;
}

void nhap(){
	cin >> v >> e;
	FOR(i, 1, e){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

void bfs(int u){
	queue<int> Q;
	Q.push(u);
	visited[u] = 1;
	while(!Q.empty()){
		int x = Q.front(); Q.pop();
		for(int i : ke[x]){
			if(!visited[i]){
				visited[i] = 1;
				Q.push(i); 
			}
		}
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
	while(T--){
		reset();
		nhap();
		for(int i = 1; i <= v; i++){
			if(!visited[i]){
				++cnt;
				bfs(i);
			}
		}
		cout << cnt << endl;
	}

	return 0;
}
 