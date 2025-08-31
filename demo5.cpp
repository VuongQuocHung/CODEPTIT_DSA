#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

int f[1000005], d[1000005];
int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		int l, r;
		cin >> l >> r;
		d[l]++;
		d[r + 1]--;
	}
	for(int i = 1; i <= 1000000; i++){
	    f[i] = f[i - 1] + d[i];
	}
	int q; cin >> q;
	while(q--){
		int x; cin >> x;
		cout << f[x] << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//