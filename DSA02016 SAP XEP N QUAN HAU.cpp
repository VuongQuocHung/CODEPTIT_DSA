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

int n, X[101], cot[101], duongCheoXuoi[101], duongCheoNguoc[101], dem = 0;

// Mảng X : lưu thứ tự các cột đã đặt
// cot[i] : check cột i đã được đặt con hậu nào chưa
// Tại vị trí i, j thì đường chéo xuôi đi qua nó có số thứ tự là i - j + n
// và đường chéo ngược đi qua nó có số thứ tự i + j - 1

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] == 0 && duongCheoXuoi[i - j + n] == 0 && duongCheoNguoc[i + j - 1] == 0){
			X[i] = j;
			cot[j] = duongCheoXuoi[i - j + n] = duongCheoNguoc[i + j - 1] = 1;
			if(i == n){
				++dem;
				for(int k = 1; k <= n; k++)
					cout << X[k] << ' ';
				cout << endl;
			}
			else if(i < n)
				Try(i + 1);
			cot[j] = duongCheoXuoi[i - j + n] = duongCheoNguoc[i + j - 1] = 0;
		}
	}
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
		dem = 0;
		memset(X, 0, sizeof(X));
		memset(cot, 0, sizeof(cot));
		memset(duongCheoXuoi, 0, sizeof(duongCheoXuoi));
		memset(duongCheoNguoc, 0, sizeof(duongCheoNguoc));
		cin >> n;
		Try(1);
		cout << dem << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//
