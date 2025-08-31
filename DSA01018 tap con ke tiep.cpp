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

int n, k, a[1005];
void nhap(){
	cin >> n >> k;
	FOR(i, 1, k){
		cin >> a[i];
	}
}

void Sinh(){
	int i = k;
	while(i >= 1 && a[i - 1] + 1 == a[i]) --i;
	// cout << i << '\n';
	if(i == 0){ // nếu i = 0 tức là cấu hình chính là 1, 2, ..., k
		// sinh ra cấu hình lớn nhất
		FOR(j, n - k + 1, n) cout << j << ' ';
		return;
	}
	a[i] -= 1;
	FOR(j, i + 1, k) a[j] = n - k + j;
	FOR(j, 1, k) cout << a[j] << ' ';
	cout << '\n';
	return;
}

int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		nhap();
		Sinh();
	}
	
	return 0;
}