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

bool cmp(ii a, ii b){
	if(a.se != b.se) return a.se < b.se;
	return a.fi > b.fi;
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
		int n; cin >> n;
		vector<ii> list(n);
		int s[n], f[n];
		for(int i = 0; i < n; i++) cin >> s[i];
		for(int i = 0; i < n; i++) cin >> f[i];

		for(int i = 0; i < n; i++){
			list[i].fi = s[i];
			list[i].se = f[i];
		}
		sort(list.begin(), list.end(), cmp);
		int cnt = 1, time_finish_current = list[0].se;
		for(int i = 1; i < n; i++){
			if(list[i].fi >= time_finish_current){
				++cnt;
				time_finish_current = list[i].se;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//