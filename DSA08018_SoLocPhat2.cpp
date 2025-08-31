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

vector<ll> v;
ll f[20];

void init(){
	f[0] = 1;
	FOR(i, 1, 15) f[i] = f[i - 1] * 10;
} 

void bfs(int n){
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

void output(){
	cout << v.size() << endl;
	for(ll x : v)
		cout << x << ' ';
	cout << endl;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	init();
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		bfs(n);
		output();
		v.clear();
	}

	return 0;
}
