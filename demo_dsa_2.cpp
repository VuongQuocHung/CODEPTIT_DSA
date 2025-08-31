#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/************************ MADE BY VƯƠNG QUỐC HƯNG ************************/

map<ll, int> mp;

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int n; cin >> n; ll a[n];
	FOR(i, 0, n - 1){
		cin >> a[i];
		mp[a[i]]++;
	}
	vector<ll> v;
	for(auto i : mp){
		if(i.se >= 2) v.pb(i.fi);
	}
	if(v.size() <= 1) cout << 0;
	else{
		int n = v.size() - 1;
		cout << v[n] * v[n - 1];
	}

	return 0;
}
 