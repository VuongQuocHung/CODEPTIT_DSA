#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
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

void twoPointers(ll n, ll k, ll a[]){
	ll ans = 0;
	for(int i = 0; i < n - 2; i++){
		int l = i + 1, r = n - 1;
		while(l < r){
			if(a[i] + a[l] + a[r] < k){
				ans += (r - l);
				++l;
			}
			else{
				--r;
			}
		}
	}
	cout << ans << endl;
}

void useBinarySearch(ll n, ll k, ll a[]){
	ll cnt = 0;
	for(int i = 0; i < n - 2; i++){
		if(a[i] >= k) break;
		for(int j = i + 1; j < n - 1; j++){
			auto it = lower_bound(a + j + 1, a + n, k - a[i] - a[j]);
			cnt += (it - (a + j + 1));
		}
	}
	cout << cnt << endl;
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
		ll n, k; cin >> n >> k;
		ll a[n];
		for(ll &i : a) cin >> i;
		sort(a, a + n);
		twoPointers(n, k, a);
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//