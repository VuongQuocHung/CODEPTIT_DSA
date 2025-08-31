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

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	
	int n, m, p;

	cin >> n >> m >> p;
	int a[n][m], b[m][p];
	FOR(i, 0, n - 1) FOR(j, 0, m - 1) cin >> a[i][j];
	FOR(i, 0, m - 1) FOR(j, 0, p - 1) cin >> b[i][j];
	int c[n][p];
	FOR(i, 0, n - 1){
		FOR(j, 0, p - 1){
			c[i][j] = 0;
			FOR(k, 0, m - 1){
				c[i][j] += a[i][k] * b[k][j];
			}
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}
