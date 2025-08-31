#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;
// Đề bài : liệt kê hoán vị liền trước

// tìm ra vị trí i đầu tiên từ phải sang sao cho a[i] > a[i + 1]
// tìm ra vị trí j đầu tiên từ phải sang sao cho a[j] < a[i]
// đổi chỗ a[i] và a[j] rồi in ra mảng a

void solve(){
	int n; cin >> n; int a[n];
	for(int& i : a) cin >> i;
	int i = n - 2, j = n - 1;

    // tìm vị trí i đầu tiên từ phải sang sao cho a[i] > a[i + 1]
	while(a[i] <= a[i + 1] && i >= 0) --i;
	
	// tìm vị trí j đầu tiên từ phải sang sao cho a[j] < a[i]
	while(a[j] >= a[i]) --j;
	swap(a[i], a[j]);

	for(int& i : a) cout << i << ' ';
	cout << '\n';
}

int main(){
	hung;
	int t; cin >> t;
	while(t--){
		solve();
	}
}