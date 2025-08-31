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
#define all(x) (x).begin(), (x).end()
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

//_______________________VƯƠNG_QUỐC_HƯNG_______________________//

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

int n, a[20];
vector<int> v;
vector<vector<int>> ans;

void Try(int i, int curr_sum){
	if(primes[curr_sum]){
		ans.pb(v);
	}
	if(i > n){
		return;
	}
	FOR(j, i, n){
		v.pb(a[j]);
		Try(j + 1, curr_sum + a[j]);
		v.pop_back();
	}
}
int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	sang();
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		FOR(i, 1, n) cin >> a[i];
		sort(a + 1, a + n + 1, greater<int>());
		Try(1, 0);
		sort(all(ans));
		for(auto v : ans){
			for(int i : v)
				cout << i << ' ';
			cout << '\n';
		}
		ans.clear();
		v.clear();
	}

	return 0;
}

//__________________________B23DCCN375__________________________//

//_________________THANK_YOU_FOR_READING_MY_CODE________________//