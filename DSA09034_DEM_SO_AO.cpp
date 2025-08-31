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

int n, m, a[1005][1005], visited[1005];

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int x, int y){
	a[x][y] = 0;
	FOR(k, 0, 7){
		int xn = x + dx[k], yn = y + dy[k];
		if(xn >= 1 && xn <= n && yn >= 1 && yn <= m && a[xn][yn] == 1){
			dfs(xn, yn);
		}
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n >> m;
	FOR(i, 1, n){
		FOR(j, 1, m){
			char c;
			cin >> c;
			if(c == 'W') a[i][j] = 1;
			else a[i][j] = 0;
		}
	}

	int cnt = 0;
	FOR(i, 1, n){
		FOR(j, 1, m){
			if(a[i][j]){
				dfs(i, j);
				++cnt;
			}
		}
	}
	cout << cnt;

	return 0;
}

//________________________________H_Ư_N_G_______________________________//