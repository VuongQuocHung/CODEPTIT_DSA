#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define fspr fixed << setprecision
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define _Vuong_Quoc_Hung_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, k;
void Sinh(){
	cin >> n >> k;
	int a[k + 1];
	FOR(i, 1, k) cin >> a[i];
	int i = k;
	while(i >= 1 && a[i] == n - k + i) --i;
	if(i == 0){
		FOR(j, 1, k) cout << j << ' ';
		return;
	}	
	a[i] += 1;
	FOR(j, i + 1, k) a[j] = a[i] + j - i;
	FOR(t, 1, k) cout << a[t] << ' ';
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
		Sinh();
		cout << '\n';
	}
	
	return 0;
}