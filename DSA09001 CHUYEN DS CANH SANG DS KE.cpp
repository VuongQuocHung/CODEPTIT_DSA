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

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		vector<int> ke[1005];
		int n, m;
		cin >> n >> m;
		FOR(i, 1, m){
			int x, y; cin >> x >> y;
			ke[x].pb(y); ke[y].pb(x);
		}
		FOR(i, 1, n) sort(all(ke[i]));

		FOR(i, 1, n){
			cout << i << ": ";
			for(int x : ke[i])
				cout << x << ' ';
			cout << endl;
		}
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//