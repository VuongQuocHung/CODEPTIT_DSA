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

int n, k, a[1005], x[1005];
vector<vi> ds;

void check(){
	int sum = 0;
	vector<int> v;
	v.pb(-1);
	FOR(i, 1, n){
		sum += x[i] * a[i];
		v.pb(x[i]);
		if(sum > k) return;
	}
	if(sum == k) ds.pb(v);
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n) check();
		else Try(i + 1);
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n >> k;
	FOR(i, 1, n) cin >> a[i];
	Try(1);
	for(auto v : ds){
		for(int i = 1; i < v.size(); i++){
			if(v[i]) cout << a[i] << ' ';
		}
		cout << endl;
	}
	cout << ds.size();

	return 0;
}
