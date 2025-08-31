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
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for(int &i : a) cin >> i;
		for(int &i : b) cin >> i;
		sort(a, a + n); sort(b, b + m);
		vector<int> hop, giao;
		int i = 0, j = 0;
		while(i < n && j < m){
			if(a[i] == b[j]){
				hop.pb(a[i]);
				giao.pb(a[i]);
				++i; ++j;
			}else if(a[i] < b[j]){
				hop.pb(a[i]);
				++i;
			}else{
				hop.pb(b[j]);
				++j;
			}
		}
		while(i < n){
			hop.pb(a[i]);
			++i;
		}
		while(j < m){
			hop.pb(b[j]);
			++j;
		}
		for(int x : hop)
			cout << x << ' ';
		cout << '\n';
		for(int x : giao)
			cout << x << ' ';
		cout << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//