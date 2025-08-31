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
	
	int t;
	cin >> t;
	while(t--){
		priority_queue<ll, vector<ll>, greater<ll>> pq;
		int n; cin >> n;
		int length;
		FOR(i, 1, n){
			cin >> length;
			pq.push(length);
		}
		ll max_cost = 0;
		while(pq.size() >= 2){
			int x = pq.top(); pq.pop();
			int y = pq.top(); pq.pop();
			max_cost += x + y;
			pq.push(x + y);
		}
		cout << max_cost << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//