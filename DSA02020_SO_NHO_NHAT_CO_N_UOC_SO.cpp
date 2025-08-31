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

int n;
int M[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
ll res;

void Try(int i, ll x, ll y){ // x : số hiện tại, y : số ước
	cout << i << ' ' << x << ' ' << y << endl;
	if(y > n) return; // nếu số ước vượt quá n thì dừng
	if(y == n) res = min(res, x);
	for(int j = 1;; j++){  // j là số mũ của số nguyên tố M[i]
		if(x * M[i] > res) break;
		cout << "x = " << x << " y = " << y << endl;
		x *= M[i]; // x = x * M[i]^j
		cout << "j = " << j << endl;
		Try(i + 1, x, y * (j + 1));
	}
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
		cin >> n;
		res = 1e18;
		Try(0, 1, 1);
		cout << res << endl << endl;
	}

	return 0;
}
