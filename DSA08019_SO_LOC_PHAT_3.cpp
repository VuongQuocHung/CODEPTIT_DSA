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

ll f[100];
void limit(){
	f[0] = 1;
	FOR(i, 1, 15) f[i] = f[i - 1] * 10;
}

vector<ll> v;

void solve(int n){
	queue<ll> Q;
	Q.push(6);
	Q.push(8);
	while(!Q.empty()){
		ll x = Q.front(); Q.pop();
		if(x > f[n]) return;
		v.pb(x);
		Q.push(x * 10 + 6);
		Q.push(x * 10 + 8);
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	limit();
	while(T--){
		v.clear();
		int n; 
		cin >> n;
		solve(n);
		reverse(all(v));
		cout << v.size() << endl;
		for(ll x : v) cout << x << ' ';
		cout << endl;
	}

	return 0;
}
