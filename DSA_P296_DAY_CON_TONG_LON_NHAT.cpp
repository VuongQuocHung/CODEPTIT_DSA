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

int a[1000005];
ll f[1000005];
int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	T = 1;
	while(T--){
		int n, q;
		cin >> n >> q;
		FOR(i, 1, n) cin >> a[i];
		ll sum = 0;
		FOR(i, 1, n){
			if(a[i] > 0) sum += a[i];
			f[i] = sum;
		}
		while(q--){
			int l, r; cin >> l >> r;
			cout << f[r] - f[l - 1] << endl;
		}
	}

	return 0;
}
