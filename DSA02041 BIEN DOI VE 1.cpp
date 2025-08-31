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

int n;

void bfs(){
	queue<ii> Q; // first : gia tri, second : so thao tac bien doi
	Q.push({n, 0});
	while(!Q.empty()){
		pair<int, int> x = Q.front();
		Q.pop();
		// cout << x.fi << ' ' << x.se << '\n';
		if(x.fi == 1){
			cout << x.se << '\n';
			return;
		}
		if(x.fi % 3 == 0)
			Q.push({x.fi / 3, x.se + 1});
		if(x.fi % 2 == 0)
			Q.push({x.fi / 2, x.se + 1});
		Q.push({x.fi - 1, x.se + 1});
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		bfs();
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//