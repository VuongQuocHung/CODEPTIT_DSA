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

int n1, n2, n3;
ll a[1000005], b[1000005], c[1000005];

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		cin >> n1 >> n2 >> n3;
		FOR(i, 1, n1) cin >> a[i];
		FOR(i, 1, n2) cin >> b[i];
		FOR(i, 1, n3) cin >> c[i];
		int i = 1, j = 1, k = 1;
		vector<int> v;
		while(i <= n1 && j <= n2 && k <= n3){
			if(a[i] == b[j] && b[j] == c[k]){
				v.pb(a[i]);
				++i; ++j; ++k;
			}
			else if(a[i] < b[j]) ++i;
			else if(b[j] < c[k]) ++j;
			else ++k;
		}
		if(v.empty()) cout << -1 << endl;
		else{
			for(int x : v) cout << x << ' ';
			cout << endl;
		}
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(c, 0, sizeof(c));
	}

	return 0;
}
