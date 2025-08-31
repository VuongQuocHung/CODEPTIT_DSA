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

int n, m, a[1005][1005], visited[1005];
vector<int> ke[1005];
int d[100][100];

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		cin >> n >> m;
		FOR(i, 1, m){
			int x, y; cin >> x >> y;
			ke[x].pb(y); ke[y].pb(x);
		}
		FOR(i, 1, n){
			FOR(j, 1, n){
				d[i][j] = (i == j ? 0 : 1e9);
			}
		}
		FOR(k, 1, n){
			FOR(i, 1, n){
				FOR(j, 1, n){
					if(d[i][k] + d[k][j] < d[i][j])
						d[i][j] = d[i][k] + d[k][j]; 
				}
			}
		}
		int res = 1e9;
		FOR(i, 1, n){
			if(d[i][2] < 1e9 && d[2][i] < 1e9){
				res = min(res, d[i][2] + d[2][i]);
			}
		}
		cout << res + 1 << endl;
		FOR(i, 1, n) ke[i].clear();
	}

	return 0;
}
