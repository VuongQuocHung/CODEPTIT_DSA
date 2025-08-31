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

int n, k;
ll f[30], power[30];

void init(){
	f[1] = 1;
	power[0] = 1;
	power[1] = 2;
	FOR(i, 2, 25){
		f[i] = 2 * f[i - 1] + 1;
		power[i] = power[i - 1] * 2;
	}

}

char Find(ll n, ll k){
	if(n == 1) return 'A';
	if(k == power[n - 1]) return 'A' + n - 1;
	else if(k < power[n - 1])
		return Find(n - 1, k);
	else
		return Find(n - 1, k - power[n - 1]);
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
		cin >> n >> k;
		cout << Find(n, k) << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//