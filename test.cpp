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
	int n; cin >> n;
	int s[n + 1], f[n + 1];
	FOR(i, 1, n) cin >> s[i];
	FOR(i, 1, n) cin >> f[i];
	sort(f + 1, f + n + 1);
	bool check[n + 1] = {0};
	vector<int> ans;
	int i = 1;
	ans.pb(1);
	check[1] = 1;
	for(int j = 1; j <= n; j++){
		if(s[j] >= f[i] && !check[j]){
			ans.pb(j);
			i = j;
			check[j] = 1;
		}
	}
	for(int x : ans) cout << x << ' ';

	return 0;
}

//_______________________________B23DCCN375_______________________________//