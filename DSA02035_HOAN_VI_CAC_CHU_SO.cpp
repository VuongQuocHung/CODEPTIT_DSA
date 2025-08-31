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
	
	int n, k; cin >> n >> k;
	int a[k];
	FOR(i, 0, k - 1) a[i] = i;
	vector<string> v;
	FOR(i, 1, n){
		string s; 
		cin >> s;
		v.pb(s);
	}
	int res = INT_MAX;
	do {
		int minn = INT_MAX, maxx = INT_MIN;
		for(auto s : v){
			string x = "0";
			FOR(i, 0, k - 1) x += s[a[i]];
			minn = min(stoi(x), minn);
			maxx = max(stoi(x), maxx);
		}
		res = min(res, maxx - minn);
	} while(next_permutation(a, a + k));
	cout << res << endl;

	return 0;
}
