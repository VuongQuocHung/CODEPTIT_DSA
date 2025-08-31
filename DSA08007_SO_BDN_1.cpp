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

void solve(string n){
	queue<string> Q;
	Q.push("1");
	int cnt = 0;
	while(!Q.empty()){
		string s = Q.front(); Q.pop();
		if(s.size() < n.size() || (s.size() == n.size() && s <= n)) ++cnt;
		else break;
		Q.push(s + "0");
		Q.push(s + "1");
	}
	cout << cnt << endl;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		string n;
		cin >> n;
		solve(n);
	}

	return 0;
}
