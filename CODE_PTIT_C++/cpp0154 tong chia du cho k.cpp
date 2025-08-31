#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;
void solve(){
	int n; ll k;
	cin >> n >> k;
	if(n < k){
		if(k == n * (n + 1) / 2) cout << 1 << '\n';
		else cout << 0 << '\n';
		return;
	}else if(n == k){
		if(k == k * (k - 1) / 2) cout << 1 << '\n';
		else cout << 0 << '\n';
	}else{
		int x =  k * (k - 1) / 2, y = n / k, z = n - y * k;
		if(x * y + z * (z + 1) / 2 == k) cout << 1 << '\n';
		else cout << 0 << '\n';
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}