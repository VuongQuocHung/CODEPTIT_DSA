#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/************************ MADE BY VƯƠNG QUỐC HƯNG ************************/

int main(){
	faster();
	int n; cin >> n;
	int a[n];
	ll tong = 0, dem = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] % 2 == 0){
			tong += a[i];
			dem++;
		}
	}
	if(dem == 0) cout << 0;
	else cout << 1.0 * tong / dem;

	return 0;
}
