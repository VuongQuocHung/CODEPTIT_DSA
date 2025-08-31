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

int n, k, a[20];

vector<int> v;
vector<vi> ans;

void Try(int i){
	if(v.size() == k){
		ans.pb(v);
		return;
	}
	if(v.size() > k)
		return;
	FOR(j, i, n){
		v.pb(a[j]);
		Try(j + 1);
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
		cin >> n >> k;
		FOR(i, 1, n) cin >> a[i];
		sort(a + 1, a + n + 1);
		Try(1);
		for(auto v : ans){
			for(int i : v)
				cout << i << ' ';
			cout << '\n';
		}
		ans.clear();
		v.clear();
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//

//_______________________THANKS_FOR_READING_MY_CODE_______________________//