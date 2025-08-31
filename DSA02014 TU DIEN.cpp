#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
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

int n, m, k;
char a[10][10];
vector<string> dic, ans;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
bool visited[10][10];
string w;

void dfs(int i, int j){
	for(string s : dic){
		if(s == w)
			ans.pb(w);
	}
	for(int u = 0; u < 8; u++){
		int i1 = i + dx[u], j1 = j + dy[u];
		if(i1 >= 1 && i1 <= m && j1 >= 1 && j1 <= n && !visited[i1][j1]){
			visited[i1][j1] = true;
			w.pb(a[i1][j1]);
			dfs(i1, j1);
			visited[i1][j1] = false;
			w.pop_back();
		}
	}
}
int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		w = "";
		cin >> k >> m >> n;
		cin.ignore();
		for(int i = 1; i <= k; i++){
			string s; 
			cin >> s; 
			dic.pb(s);
		}
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++) cin >> a[i][j];
		}
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				memset(visited, 0, sizeof(visited));
				visited[i][j] = true;
				w.pb(a[i][j]);
				dfs(i, j);
				w.pop_back();
			}
		}
		if(ans.size() == 0) cout << -1 << '\n';
		else{
			for(string s : ans) cout << s << ' ';
			cout << '\n';
		}	
		ans.clear();
		dic.clear();
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//