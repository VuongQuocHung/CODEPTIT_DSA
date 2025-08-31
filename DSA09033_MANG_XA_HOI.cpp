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

int n, m, bac[100005];
vector<int> ke[100005];

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
		bac[x]++; bac[y]++;
	}
}

vector<int> lien_thong;
int visited[100005];

// trong 1 thành phần liên thông có v đỉnh, thì bậc của 1 đỉnh phải là v - 1
// thì mới được coi là hoàn hảo
void dfs(int u){
	visited[u] = 1;
	lien_thong.pb(u);
	for(int v : ke[u])
		if(!visited[v]) dfs(v);
}

void reset(){
	FOR(i, 1, n) ke[i].clear();
	memset(visited, 0, sizeof(visited));
	memset(bac, 0, sizeof(bac));
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
		reset();
		nhap();
		int ok = 1;
		FOR(i, 1, n){
			if(!visited[i]){
				lien_thong.clear(); dfs(i);
				if(bac[i] != lien_thong.size() - 1){
					ok = 0;
					break;
				}
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
