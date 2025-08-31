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

int check(string& s){
	unordered_map<char, int> mp;
	int maxx = 0;
	FOR(i, 0, (int)s.length() - 1){
		mp[s[i]]++;
		maxx = max(mp[s[i]], maxx);
	}
	if(maxx <= s.length() + 1 - maxx) return 1;
	return 0;
}
int main(){
	hung;
	int t; cin >> t; cin.ignore();
	string s;
	while(t--){
		cin >> s;
		cout << check(s) << '\n';
	}
}