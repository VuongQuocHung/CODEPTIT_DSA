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

int main(){
	hung;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int n; cin >> n;
	int a[n * n];
	FOR(i, 0, n * n - 1) cin >> a[i];

	sort(a, a + n * n);

	int matrix[n][n];
	int left = 0, right = n - 1;
	int cnt = 0;
	while(left <= right){

		// hàng trên cùng
		FOR(i, left, right) matrix[left][i] = a[cnt++];

		// hàng ngoài cùng bên phải
		FOR(i, left + 1, right) matrix[i][right] = a[cnt++];

		// hàng dưới cùng
		FORD(i, right - 1, left) matrix[right][i] = a[cnt++];

		// hàng ngoài cùng trái
		FORD(i, right - 1, left + 1) matrix[i][left] = a[cnt++];

		// thu gọn left và right
		++left, --right;
	}

	FOR(i, 0, n - 1){
		FOR(j, 0, n - 1){
			cout << matrix[i][j] << ' ';
		}
		cout << '\n';
	}
}