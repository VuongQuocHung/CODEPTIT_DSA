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

ll f[100];
void init(){
	f[1] = f[2] = 1;
	for(int i = 3; i <= 92; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

char Find(ll n, ll k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= f[n - 2]) return Find(n - 2, k);
	return Find(n - 1, k - f[n - 2]);
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	init(); 
	while(t--){
		ll n, k; cin >> n >> k;
		cout << Find(n, k) << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________// 