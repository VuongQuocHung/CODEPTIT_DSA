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

map<ll, ll> d; // dùng map như mảng hiệu
vector<ii> prefix;// first : cột i, second : tổng số huy hiệu từ tại cột i

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		int l, r;
		cin >> l >> r;
		d[l]++;
		d[r + 1]--;
	}
	ll curr = 0; // tổng số huy hiệu hiện có
	for(auto it : d){
		curr += it.se;
		prefix.pb({it.fi, curr}); // cột và số huy hiệu của cột
	}
	int q; cin >> q;
	while(q--){
		int x; cin >> x;
		// tìm cột trong vector prefix gần nhất với cột x
		int l = 0, r = prefix.size() - 1, ans = -1;
		while(l <= r){
			int m = (l + r)/2;
			if(prefix[m].fi <= x){
				ans = m;
				l = m + 1;
			}
			else r = m - 1;
		}
		if(ans == -1) cout << 0 << endl;
		else cout << prefix[ans].se << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//