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
	
	int n; cin >> n; 
	int a[n + 1][n + 1];
	vector<int> ke[1005];
	FOR(i, 1, n){
		FOR(j, 1, n){
			cin >> a[i][j];
			if(i < j && a[i][j]){
				ke[i].pb(j);
				ke[j].pb(i);
			}
		}
	}
	FOR(i, 1, n){
		for(int x : ke[i])
			cout << x << ' ';
		cout << endl;
	}

	return 0;
}
