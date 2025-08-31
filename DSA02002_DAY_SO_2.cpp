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

int n, a[1005];
vector<vi> v;

void Try(int k){
	if(k == 0) return;
	vector<int> tmp(a + 1, a + k + 1);
	v.pb(tmp);
	FOR(i, 1, k - 1) a[i] = a[i] + a[i + 1];
	Try(k - 1); 
}

void In(){
	for(auto x : v){
		cout << "[";
		for(int i = 0; i < x.size(); i++){
			cout << x[i];
			if(i != x.size() - 1) cout << ' ';
		}
		cout << "] ";
	}
	cout << endl;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		FOR(i, 1, n) cin >> a[i];
		Try(n);
		reverse(all(v));
		In();
		v.clear();
	}

	return 0;
}
