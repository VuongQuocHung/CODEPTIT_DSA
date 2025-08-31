#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, m, s, t, u, v, a[1005][1005], visited[1005];

int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};
char huong_di[4] ={'U', 'L', 'R', 'D'};

int ok;
void dfs(int x, int y, int cnt, char huong){
	if(ok) return;
	if(x == u && y == v && cnt <= 2){
		ok = 1;
		return;
	}
	if(cnt >= 3) return;
	a[x][y] = 0;
	FOR(k, 0, 3){
		int i = x + dx[k], j = y + dy[k];
		if(i >= 1 && i <= n && j >= 1 && j <= m && a[i][j]){
			if(huong == 0 || huong_di[k] == huong) dfs(i, j, cnt, huong_di[k]);
			else dfs(i, j, cnt + 1, huong_di[k]);
		}
	}
	a[x][y] = 0;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	
	int T; cin >> T;
	while(T--){
		cin >> n >> m;
		FOR(i, 1, n){
			FOR(j, 1, m){
				char c; cin >> c;
				if(c == '*') a[i][j] = 0;
				else{
					a[i][j] = 1;
					if(c == 'S') s = i, t = j;
					if(c == 'T') u = i, v = j;
				}
			}
		}
		ok = 0;
		dfs(s, t, 0, 0);
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}