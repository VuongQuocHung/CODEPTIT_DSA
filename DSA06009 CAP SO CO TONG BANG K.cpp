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
		int n, k; cin >> n >> k; int a[n];
		for(int &i : a)
			cin >> i;
		sort(a, a + n);
		ll cnt = 0;
		for(int i = 0; i < n; i++){
			int tmp = k - a[i];
			auto dau = lower_bound(a + i + 1, a + n, tmp);
			if(dau != a + n && *dau == tmp){
				auto cuoi = upper_bound(a + i + 1, a + n, tmp);
				cnt += (cuoi - dau);
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//