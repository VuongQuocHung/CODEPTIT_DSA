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

int tongChuSo(int n){
	int res;
	while(n > 0){
		res += n % 10;
		n /= 10;
	}
	return res;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int sum = tongChuSo(n);
		
	}
}