#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n], b[m];
		int maxx = INT_MIN, minn = INT_MAX;
		for(int& i : a){
			cin >> i;
			maxx = max(i, maxx);
		}
		for(int& i : b){
			cin >> i;
			minn = min(i, minn);
		}
		cout << 1ll * maxx * minn << '\n';
	}
}