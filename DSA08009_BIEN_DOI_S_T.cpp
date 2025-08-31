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

int s, t;

int solve(){
	queue<ii> Q;
	unordered_set<int> used;
	Q.push({s, 0});
	used.insert(s);
	while(!Q.empty()){
		ii x = Q.front(); Q.pop();
		int n = x.fi, cnt = x.se;
		// cout << n << ' ' << cnt << endl;
		if(n == t) return cnt;
		if(n - 1 > 0 && used.count(n - 1) == 0){
			used.insert(n - 1);
			Q.push({n - 1, cnt + 1});
		}
		if(n < t && used.count(n * 2) == 0){
			used.insert(n * 2);
			Q.push({n * 2, cnt + 1});
		}
	}
	return 0;
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
		cin >> s >> t;
		cout << solve() << endl;
	}

	return 0;
}
