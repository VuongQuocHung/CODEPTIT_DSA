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

int n, a[1005];
void nhap(){
	cin >> n;
	FOR(i, 1, n) cin >> a[i];
}
void Try(int k){
	cout << "[";
	FOR(i, 1, k){
		cout << a[i];
		if(i != k) cout << ' ';
	} 
	cout << "]\n";
	if(k == 1) return;
	FOR(i, 1, k - 1){
		a[i] = a[i] + a[i + 1];
	}
	Try(k - 1);
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
		Try(n);
	}
	
	return 0;
}