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

int n, k, a[1005], used[1005];
vector<vi> ds;
vector<int> v;

void Try(int i, int cur_sum){ // i là chỉ số của phần tử đã chọn ở lần gọi trước
	FOR(j, i, n){
		if(cur_sum + a[j] <= k){
			v.pb(a[j]);
			if(cur_sum + a[j] == k) ds.pb(v);
			else Try(i + 1, cur_sum + a[j]);// truyền vào j + 1 để gọi Try đến phần tử ở sau phần tử đã chọn
											// ko truyền i + 1 vì nó sẽ ko theo đúng thứ tự
			v.pop_back();
		}
	}
}

void In(){
	if(ds.empty()){
		cout << -1 << endl;
		return;
	}
	for(auto x : ds){
		cout << "[";
		for(int i = 0; i < x.size(); i++){
			cout << x[i];
			if(i != x.size() - 1) cout << ' ';
		}
		cout << "] ";
	}
	cout << endl;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		ds.clear();
		cin >> n >> k;
		FOR(i, 1, n) cin >> a[i];
		sort(a + 1, a + n + 1);
		Try(1, 0);
		In();
	}

	return 0;
}
