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
	
	int T;
	cin >> T;
	while(T--){
		int k; cin >> k; cin.ignore();
		string s; cin >> s;

		unordered_map<char, int> mp;
		for(char c : s) mp[c]++;

		priority_queue<int>	freq;
		for(auto it : mp) freq.push(it.se);
		while(k > 0 && freq.size()){
			int x = freq.top(); freq.pop();
			if(x > 0){
				--x;
				--k;
				freq.push(x);
			}
		}
		ll ans = 0;
		while(freq.size()){
			int x = freq.top();
			ans += 1ll * x * x;
			freq.pop();
		}
		cout << ans << endl;
	}

	return 0;
}
