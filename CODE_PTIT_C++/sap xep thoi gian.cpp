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

bool cmp(pair<pii, int> a, pair<pii, int> b){
	if(a.fi.fi != b.fi.fi) return a.fi.fi < b.fi.fi;
	if(a.fi.se != b.fi.se) return a.fi.se < b.fi.se;
	return a.se < b.se;
}
void solve(){
	int n; cin >> n;
	vpp times;
	int h, m, s;
	FOR(i, 0, n - 1){
		cin >> h >> m >> s;
		times.push_back({{h, m}, s});
	}
	sort(times.begin(), times.end(), cmp);
	for(auto t : times){
		cout << t.fi.fi << ' ' << t.fi.se << ' ' << t.se << '\n';
	}
}
int main(){
	hung;
	solve();
}