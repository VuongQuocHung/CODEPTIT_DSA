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

int v, e, s, t;
vector<int> ke[1005];

void nhap(){
	cin >> v >> e;
	FOR(i, 1, e){
		int x, y; cin >> x >> y;
		ke[x].pb(y); ke[y].pb(x);
	}
}

int Euler(){
	int cnt = 0;
	FOR(i, 1, v) if(ke[i].size() % 2 == 1) ++cnt;
	if(cnt == 2) return 1;
	if(cnt == 0) return 2;
	return 0;
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
		FOR(i, 1, v) ke[i].clear();
		nhap();
		cout << Euler() << endl;
	}

	return 0;
}
