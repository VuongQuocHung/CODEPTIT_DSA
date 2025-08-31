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

int dp[105][105][105];

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		int n, m, t;
		cin >> n >> m >> t;
		cin.ignore();
		string x, y, z;
		cin >> x >> y >> z;
		FOR(i, 1, n){
			FOR(j, 1, m){
				FOR(k, 1, t){
					if(x[i - 1] == y[j - 1] && y[j - 1] == z[k - 1]) dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
					else dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
				}
			}
		}
		cout << dp[n][m][t] << endl;
	}

	return 0;
}
