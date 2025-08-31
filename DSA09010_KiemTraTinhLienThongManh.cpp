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

int n, m;
vector<int> ke[1005], ke_nguoc[1005];
bool visited[1005];
stack<int> st;

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y;
		cin >> x >> y;
		ke[x].pb(y);
		ke_nguoc[y].pb(x);
	}
	memset(visited, 0, sizeof(visited));
}

void DFS1(int u){
	visited[u] = 1;
	for(int v : ke[u])
		if(!visited[v]) DFS1(v);
	st.push(u);
}

void DFS2(int u){
	visited[u] = 1;
	for(int v : ke_nguoc[u])
		if(!visited[v]) DFS2(v);
}

void Kosaraju(){
	FOR(i, 1, n) if(!visited[i]) DFS1(i);
	memset(visited, 0, sizeof(visited));
	int scc = 0;
	while(!st.empty()){
		int u = st.top(); st.pop();
		if(!visited[u]){
			++scc;
			DFS2(u);
			if(scc > 1){
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
	while(!st.empty()) st.pop();
}

void reset(){
	while(!st.empty()) st.pop();
	FOR(i, 1, n){
		ke[i].clear();
		ke_nguoc[i].clear();
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
		Kosaraju();
	}

	return 0;
}
