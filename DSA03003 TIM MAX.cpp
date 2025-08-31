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

int mod = 1e9 + 7;
int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		sort(a, a + n);
		ll ans = 0;
		for(int i = 0; i < n; i++){
			ans = ans + a[i] * i;
			ans %= mod;
		}
		cout << ans << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//