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

int n, visited[1000005];
vector<int> ke[1000005];

vector<string> res;

void dfs(int u, string s){
	if(ke[u].size() == 1 && u != 1) res.pb(s);
	visited[u] = 1;
	for(int v : ke[u]) if(!visited[v]) dfs(v, s + " " + to_string(v));
}

bool cmp(string a, string b){
	int last_leaf_a = a.find_last_of(" ");
	int last_leaf_b = b.find_last_of(" ");
	return stoi(a.substr(last_leaf_a, 10000)) < stoi(b.substr(last_leaf_b, 10000));
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
		memset(visited, 0, sizeof(visited));
		FOR(i, 1, 100005) ke[i].clear();
		res.clear();
		cin >> n;
		FOR(i, 1, n - 1){
			int x, y; cin >> x >> y;
			ke[x].pb(y); ke[y].pb(x);
		}
		dfs(1, "1");
		sort(all(res), cmp);
		for(auto s : res) cout << s << endl;
		cout << endl;
	}

	return 0;
} 

