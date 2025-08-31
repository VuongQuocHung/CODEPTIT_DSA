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

int n, m, a[1005][1005], visited[1005][1005];;
vector<int> ke[1005];

void input(){
	cin >> n >> m;
	FOR(i, 1, n) FOR(j, 1, m) cin >> a[i][j];
}

// void reset(){
// 	memset(visited, 0, sizeof(visited));
// 	FOR(i, 1, n) ke[i].clear();
// }

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int i, int j){
	a[i][j] = 0;
	FOR(k, 0, 7){
		int i1 = i + dx[k], j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1])
			dfs(i1, j1);
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
		input();
		int cnt = 0;
		FOR(i, 1, n){
			FOR(j, 1, m){
				if(a[i][j]){
					++cnt;
					dfs(i, j);
				}
			}
		}
		cout << cnt << endl;
	}


	return 0;
}
