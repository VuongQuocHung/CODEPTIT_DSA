//Created by Vương Quốc Hưng
	
#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define fspr(n) fixed << setprecision(n)

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;
using vll = vector<long long>;
using vpi = vector<pair<int, int>>;
using vpp = vector<pair<pair<int, int>, int>>;

//Cho số tự nhiên N
//chỉ được phép sử dụng nhiều nhất một phép đổi chỗ giữa 2 chữ số 
//để nhận được số lớn nhất nhỏ hơn N
//=> chính là bài toán sinh hoán vị liền trước

void solve(){
	string a; cin >> a;
	int n = a.length();

	int i = n - 2, j = n - 1;
	//tìm vị trí i lớn nhất sao cho a[i] > a[i + 1]
	while(i >= 0 && a[i] <= a[i + 1]) --i;
	//nếu không tìm được, tức là không thể sắp xếp theo đề bài
	if(i == -1){
		cout << -1 << '\n';
		return;
	}
	//tìm vị trí lớn nhất và nhỏ hơn a[i]
	while(a[j] >= a[i]) --j;
	while(a[j] == a[j - 1]) --j;

	swap(a[i], a[j]);

	cout << a << '\n';
}
int main(){
	hung;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	int t; cin >> t; cin.ignore();
	while(t--){
		solve();
	}
}