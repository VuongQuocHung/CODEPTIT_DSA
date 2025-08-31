#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int maxn = 1e7;
int p[10000001];
vector<int> v;

void sang(){
	for(int i = 0; i <= maxn; i++) p[i] = 1;
	p[0] = p[1] = 0;
	for(int i = 2; i <= maxn; i++){
		if(p[i]){
			v.push_back(i);
			for(ll j = 1ll * i * i; j <= maxn; j += i){
				p[j] = 0;
			}
		}
	}
}

void solve(ll n){
	for(int i = 0; i < v.size(); i++){
		if(n % v[i] == 0){
			int cnt = 0;
			while(n % v[i] == 0){
				++cnt;
				n /= v[i];
			}
			cout << v[i] << ' ' << cnt << '\n';
		}
    }
	if(n > 1) cout << n << ' ' << 1 << '\n';
}
int main(){
	int t; cin >> t;
	sang();
	while(t--){
		ll n; cin >> n;
		solve(n);
		if(t > 0) cout << '\n';
	}
}