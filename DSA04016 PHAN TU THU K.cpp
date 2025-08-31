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

int m, n, k;
int a[100005], b[1000005];

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		cin >> m >> n >> k;
		FOR(i, 1, m) cin >> a[i];
		FOR(i, 1, n) cin >> b[i];
		vector<int> c;
		int i = 1, j = 1;
		while(i <= m && j <= n){
			if(a[i] < b[j])
				c.pb(a[i++]);
			else
				c.pb(b[j++]);
		}	
		while(i <= m){
			c.pb(a[i++]);
		}
		while(j <= n){
			c.pb(b[j++]);
		}
		cout << c[k - 1] << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//