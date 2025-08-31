#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

//_______________________VƯƠNG_QUỐC_HƯNG_______________________//

int n, a[20];
vector<vector<int>> ans;
vector<int> v;

void Try(int i, int curr_sum){

	if(curr_sum % 2 != 0)
		ans.pb(v);

	if(i > n) 
		return;

	FOR(j, i, n){
		v.pb(a[j]);
		Try(j + 1, curr_sum + a[j]);
		v.pop_back();
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
		FOR(i, 1, n) cin >> a[i];
		sort(a + 1, a + n + 1, greater<int>());
		Try(1, 0);
		sort(all(ans));
		for(vector<int> &i : ans){
			for(int &j : i) 
				cout << j << ' ';
			cout << '\n';
		}
		ans.clear();
		v.clear();
	}

	return 0;
}

//__________________________B23DCCN375__________________________//

//_________________THANK_YOU_FOR_READING_MY_CODE________________//