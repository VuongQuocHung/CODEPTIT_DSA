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

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	int n; cin >> n;
	FOR(i, 1, n){
		int x; cin >> x;
		pq.push(x);
	}
	int x1 = 0, x2 = 0;
	while(pq.size() > 1){
		x1 = x1 * 10 + pq.top(); pq.pop();
		x2 = x2 * 10 + pq.top(); pq.pop();
	}
	cout << x1 << ' ' << x2 << '\n';
	cout << pq.size() << ' ' << pq.top() << ' ';
	if(pq.empty()) cout << "Rong";
	else cout << pq.size() << ' ' << pq.top();
	return 0;
}

//_______________________________B23DCCN375_______________________________//