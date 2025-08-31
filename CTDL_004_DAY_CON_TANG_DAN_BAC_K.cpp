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

int n, k, cnt, a[1005];
vector<int> v;
void Try(int i){
	for(int j = i; j <= n; j++){
		if(v.empty() || a[j] > v.back()){
			v.pb(a[j]);
			if(v.size() == k){
				++cnt;
				// for(int x : v) cout << x << ' ';
				// cout << endl;
			}
			else if(v.size() < k) Try(j + 1);
			v.pop_back();
		}
	}
}
int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n >> k;
	FOR(i, 1, n) cin >> a[i];
	Try(1);
	cout << cnt << endl;

	return 0;
}
