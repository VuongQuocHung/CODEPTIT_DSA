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

int n, a[101][101], X[101], cot[101];
int duongCheoXuoi[101], duongCheoNguoc[101], sum = 0, ans = 0;

// cot[i] : check cột i đã được đặt con hậu nào nên chưa
// tại vị trí i, j thì đường chéo xuôi đi qua nó có số thứ tự là i - j + n
// và đường chéo ngược đi qua nó có số thứ tự i + j - 1


void Try(int i){ // Xét hàng i
	for(int j = 1; j <= n; j++){
		if(cot[j] == 0 && duongCheoXuoi[i - j + n] == 0 && duongCheoNguoc[i + j - 1] == 0){
			X[i] = j;
			sum += a[i][j];
			cot[j] = duongCheoXuoi[i - j + n] = duongCheoNguoc[i + j - 1] = 1;
			if(i == n)
				ans = max(ans, sum);
			else if(i < n)
				Try(i + 1);
			sum -= a[i][j];
			cot[j] = duongCheoXuoi[i - j + n] = duongCheoNguoc[i + j - 1] = 0;
		}
	}
}

int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	n = 8;
	for(int t = 1; t <= T; t++){
		ans = sum = 0;
		memset(X, 0, sizeof(X));
		memset(cot, 0, sizeof(cot));
		memset(duongCheoXuoi, 0, sizeof(duongCheoXuoi));
		memset(duongCheoNguoc, 0, sizeof(duongCheoNguoc));
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				cin >> a[i][j];

		//cout << "Test " << t << ": ";
		Try(1);
		cout << ans << '\n';
	}
	
	return 0;
}