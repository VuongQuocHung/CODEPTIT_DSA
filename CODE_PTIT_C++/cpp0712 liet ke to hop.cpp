#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

void hienThi(int a[], int k){
	for(int i = 1; i <= k; ++i){
		cout << a[i];
	}
	cout << ' ';
}

void Try(int i, int a[], int n, int k){
	for(int j = a[i - 1] + 1; j <= n - k + i; ++j){
		a[i] = j;
		if(i == k) hienThi(a, k);
		else Try(i + 1, a, n, k);
	}
}

void solve(){
	int n, k; cin >> n >> k;
	int a[k + 1] ={0};
	Try(1, a, n, k);
	cout << '\n';
}
int main(){
	hung;
	int t; cin >> t;
	while(t--){
		solve();
	}
}