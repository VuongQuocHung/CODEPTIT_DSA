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

int n, s, m;
// 	N : số đơn vị lương thực nhiều nhất bạn có thể mua trong ngày.
// 	S : số lượng ngày bạn cần được sử dụng lương thực để tồn tại.
// 	M : số đơn vị lương thực cần có mỗi ngày để bạn tồn tại.

void solve(){
	if(n < m){
		cout << -1;
		return;
	}
	int total = s * m; // tổng lượng lương thực cần có
	int res = (s - s/7) * n; // số lượng lương thực tối đa có thể mua được
	if(res < total){ // nếu không thể mua đủ lương thực thì chết đói
		cout << -1;
		return;
	}
	int ans = total / n; // số ngày cần để mua đủ lượng lương thực cần thiết
	if(total % n != 0){ // nếu lẻ thì cần thêm 1 ngày nữa 
		++ans;
	}
	cout << ans;
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
		cin >> n >> s >> m;
		solve();
		cout << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//