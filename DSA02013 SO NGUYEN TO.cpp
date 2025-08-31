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

int n, p, s;

int primes[1000001];
void sang(){
	for(int i = 0; i < 1000001; i++)  
		primes[i] = 1;
	primes[0] = primes[1] = 0;
	for(int i = 2; i * i <= 1000000; i++){
		if(primes[i]){
			for(int j = i * i; j <= 1000000; j += i){
				primes[j] = 0;
			}
		}
	}
}

vector<int> v;
vector<vector<int>> ans;

void Try(int i, int curr_sum, int cnt){
	if(curr_sum == s && cnt == n){
		ans.pb(v);
		return;
	}
	for(int j = i; j <= s; j++){
		if(primes[j]){
			if(cnt < n && curr_sum + j <= s){
				v.pb(j);
				Try(j + 1, curr_sum + j, cnt + 1);
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
	
	sang();
	int t;
	cin >> t;
	while(t--){
		cin >> n >> p >> s;
		Try(p + 1, 0, 0);
		cout << ans.size() << '\n';
		for(auto x : ans){
			for(int i : x){
				cout << i << ' ';
			}
			cout << '\n';
		}
		ans.clear();
		v.clear();
	}
	
	return 0;
}