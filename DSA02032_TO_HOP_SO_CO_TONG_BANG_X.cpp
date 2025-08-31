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

int n, k, a[1001], ok = 0;

vector<int> v;
vector<vector<int>> ans;

void Try(int i, int curr_sum){
	for(int j = 1; j <= n; j++){
		if(v.empty() || a[j] >= v.back()){
			if(curr_sum + a[j] <= k){
				v.pb(a[j]);
				if(curr_sum + a[j] == k) ans.pb(v);
				else Try(i + 1, curr_sum + a[j]);
				v.pop_back();
			}
		}
	}
}

int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		Try(1, 0);
		if(ans.empty()) cout << -1 << '\n';
		else{
			cout << ans.size() << ' ';
			for(auto v : ans){
				cout << "{";
				for(int i = 0; i < v.size(); i++){
					cout << v[i];
					if(i != v.size() - 1) cout << ' ';
				}
				cout << "} ";
			}
			cout << '\n';
		}
		ans.clear();
		v.clear();
	}
	
	return 0;
}