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

ll f[10];
void tinhGiaiThua(){
	f[0] = f[1] = 1;
	FOR(i, 2, 9) f[i] = i * f[i - 1];
}

int n, a[1005];

void tinhThuTu(){
	int res = 0;
	FOR(i, 1, n){
		int cnt = 0;
		FOR(j, i + 1, n){
			if(a[j] < a[i]) ++cnt;
		}
		res = res  + cnt * f[n - i];
	}
	cout << res + 1 << '\n';
}

int main(){
	faster();
	int t;
	cin >> t;
	tinhGiaiThua();
	while(t--){
		cin >> n;
		FOR(i, 1, n) cin >> a[i];
		tinhThuTu();
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//