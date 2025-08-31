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

int n, k, a[1005];

bool so_sanh(vector<int> v, int a[], int k){
	FOR(i, 1, k){
		if(v[i] != a[i]) return false;
	}
	return true;
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
		cin >> n >> k;

		FOR(i, 1, k) cin >> a[i];

		vector<int> to_hop(k + 1);
		FOR(i, 1, k) to_hop[i] = i;

		vector<vi> all_to_hop;

		while(1){
			all_to_hop.pb(to_hop);
			int i = k;
			while(i >= 1 && to_hop[i] == n - k + i) --i;
			if(i == 0) break;
			to_hop[i] += 1;
			for(int j = i + 1; j <= k; j++){
				to_hop[j] = to_hop[i] + j - i;
			}
		}
		
		int cnt = 1;
		for(auto &th : all_to_hop){
			if(so_sanh(th, a, k)){
				cout << cnt << endl;
				break;
			}
			else ++cnt;
		}
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//