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

int n, a[1005][1005], visited[1005][1005];
string path, str = "DLRU";

int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};
int ok = 0;
void Try(int i, int j){
	if(i == n && j == n){
		ok = 1;
		cout << path << ' ';
		return;
	}
	a[i][j] = 0;
	for(int k = 0; k < 4; k++){
		int i1 = i + dx[k], j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
			path.pb(str[k]);
			Try(i1, j1);
			path.pop_back();
		}
	}
	a[i][j] = 1;
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
		cin >> n;
		FOR(i, 1, n) FOR(j, 1, n) cin >> a[i][j];
		Try(1, 1);
		if(!ok) cout << -1;
		cout << endl;
		path = "";
		ok = 0;
	}

	return 0;
}
