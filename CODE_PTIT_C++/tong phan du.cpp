#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve(){
	ll n, k;
	cin >> n >> k;
	if(n < k){
		cout << n * (n + 1) / 2 << '\n';
    }else if(n == k){
    	cout << k * (k - 1) / 2 << '\n';
    }
    else{
		ll x =  k * (k - 1) / 2, y = n / k, z = n % k;
		cout << x * y + (z + 1) * z / 2 << '\n';
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}