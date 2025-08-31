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

void in(int k){
	cout << "[";
	FOR(i, 1, k){
		cout << a[i];
		if(i != k) cout << ' ';
	}
	cout << "]\n";
}

void Try(int k){
	if(k == 0) return;
	in(k);
	FOR(i, 1, k - 1) a[i] = a[i] + a[i + 1];
	Try(k - 1);
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
	}

	return 0;
}
