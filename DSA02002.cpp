#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define fspr fixed << setprecision
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define _Vuong_Quoc_Hung_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, a[1005];
vector<vector<int>> w;
void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
}

void Try(int k){
	vector<int> v(a + 1, a + k + 1);
	w.pb(v);
	if(k == 1) return;
	for(int i = 1; i < k; i++)
		a[i] = a[i] + a[i + 1];
	Try(k - 1);
}

int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		nhap();
		Try(n);
		reverse(w.begin(), w.end());
		for(auto v : w){
			cout << "[";
			for(int i = 0; i < v.size(); i++){
				cout << v[i];
				if(i != v.size() - 1) cout << ' ';
			}
			cout << "] ";
		}
		w.clear();
		cout << '\n';
	}
	
	return 0;
}