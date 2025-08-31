//Created by Vương Quốc Hưng
	
#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define fspr(n) fixed << setprecision(n)

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;
using vll = vector<long long>;
using vpi = vector<pair<int, int>>;
using vpp = vector<pair<pair<int, int>, int>>;

int main(){
	hung;
	ll n, k; cin >> n >> k;
	unordered_set<int> mod;
	FOR(i, 1, k){
		int du = n % i;
		if(mod.find(du) != mod.end()){
			cout << "NO" << '\n';
		}
		mod.insert(du);
	}
	cout << "YES" << '\n';
	return 0;
}