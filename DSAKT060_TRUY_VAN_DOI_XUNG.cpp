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

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	string s; cin >> s;
	int T;
	cin >> T;
	while(T--){
		char c;
		cin >> c;
		if(c == 'q'){
			int l, r; cin >> l >> r;
			string tmp = s;
			reverse(tmp.begin() + l - 1, tmp.begin() + r);
			if(tmp == s) cout << "YES\n";
			else cout << "NO\n";
		}
		else{
			int u; char x;
			cin >> u >> x;
			s[u - 1] = x;
		}
	}
	return 0;
}
