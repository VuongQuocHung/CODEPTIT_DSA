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

int n, k, a[1005];
vector<int> x; // cấu hình dãy con hiện tại
vector<vector<int>> v; // lưu các dãy con 

void nhap(){
	cin >> n >> k;
	FOR(i, 1, n) cin >> a[i];
	sort(a + 1, a + n + 1);
}

void in(){
	if(v.empty()){
		cout << -1 << '\n';
		return;
	}
	for(auto w : v){
		cout << "[";
		for(int i = 0; i < w.size(); i++){
			cout << w[i];
			if(i != w.size() - 1) cout << ' ';
		}
		cout << "] ";
	}
	cout << '\n';
}

void Try(int bd, int cur_sum){
	// bd : chỉ số hiện tại, cur_sum : tổng các phần tử trong dãy con hiện tại
	FOR(i, bd, n){		
		if(cur_sum + a[i] <= k){
			x.pb(a[i]);
			if(cur_sum + a[i] == k)
				v.pb(x);
			else
				Try(i + 1, cur_sum + a[i]);
			x.pop_back();
		}
	}
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
		Try(1, 0);
		in();
		v.clear();
	}
	
	return 0;
}