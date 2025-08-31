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

int m, n, a[1005][1005];
int cnt = 0;

void Try(int i, int j){
	if(i == m && j == n){
		++cnt;
		return;
	}
	if(i + 1 <= m && j <= n) Try(i + 1, j);
	if(i <= m && j + 1 <= n) Try(i, j + 1);
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
		cin >>  m >> n;
		FOR(i, 1, m) FOR(j, 1, n) cin >> a[i][j];
		Try(1, 1);
		cout << cnt << endl;
		cnt = 0;
	}

	return 0;
}
