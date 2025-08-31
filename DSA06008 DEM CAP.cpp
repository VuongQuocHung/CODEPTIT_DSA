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

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; i++) cin >> a[i];
		int dem0 = 0, dem1 = 0, dem2 = 0;;
		for(int i = 0; i < m; i++){
			cin >> b[i];
			if(b[i] == 0) ++dem0;
			else if(b[i] == 1) ++dem1;
			else if(b[i] == 2) ++dem2;
		}

		sort(b, b + m);

		ll ans = 0;

		for(int i = 0; i < n; i++){
			if(a[i] == 0) continue;

			if(a[i] == 3){
				ans += dem2;
				ans += (b + m) - upper_bound(b, b + m, 3); // tìm số phần tử > 3
			}
			else if(a[i] == 2){
				ans += (b + m) - lower_bound(b, b + m, 5); // tìm số phần tử >= 5
			}
			else if(a[i] == 1){
				ans += dem0;
			}
			else{
				ans += (b + m) - upper_bound(b, b + m, a[i]); // tìm số phần tử > a[i]
			}
			if(a[i] > 1) ans += dem0 + dem1;
		}
		cout << ans << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//