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

int last(queue<int> Q){
	int ans;
	while(!Q.empty()){
		ans = Q.front();
		Q.pop();
	}
	return ans;
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
		queue<int> Q;
		int n; cin >> n;
		while(n--){
			int tv;
			cin >> tv;
			if(tv == 1)
				cout << Q.size() << endl;
			else if(tv == 2){
				if(Q.empty()) cout << "YES\n";
				else cout << "NO\n";
			}
			else if(tv == 3){
				int x; cin >> x;
				Q.push(x);
			}
			else if(tv == 4){
				if(!Q.empty()) Q.pop();
			}
			else if(tv == 5){
				if(Q.empty()) cout << -1 << endl;
				else cout << Q.front() << endl;
			}
			else{
				if(Q.empty()) cout << -1 << endl;
				else cout << last(Q) << endl;
			}
		}
	}

	return 0;
}
