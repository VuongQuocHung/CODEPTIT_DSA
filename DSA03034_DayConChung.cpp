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

int n, m, k;
int a[100005], b[100005], c[100005];

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m >> k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= m; i++) cin >> b[i];
		for(int i = 1; i <= k; i++) cin >> c[i];
		int i1 = 1, i2 = 1, i3 = 1;
		vector<int> res;
		while(i1 <= n && i2 <= m && i3 <= k){
			if(a[i1] == b[i2] && b[i2] == c[i3]){
				res.pb(a[i1]);
				++i1; ++i2; ++i3;
			}
			else if(a[i1] < b[i2]){
				++i1;
			}
			else if(b[i2] < c[i3]){
				++i2;
			}
			else{
				++i3;
			}
		}
		if(res.empty()) cout << "NO\n";
		else{
			for(int x : res)
				cout << x << ' ';
			cout << endl;
		}
	}

	return 0;
}
