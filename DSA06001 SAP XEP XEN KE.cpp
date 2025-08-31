#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define fspr fixed << setprecision
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define _Vuong_Quoc_Hung_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n + 1];
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a + 1, a + n + 1, greater<int>());
		int l = 1, r = n;
		while(l <= r){
			if(l != r)
				cout << a[l] << ' ' << a[r] << ' ';
			else cout << a[l];
			++l; --r;
		}
		cout << '\n';
	}
	
	return 0;
}