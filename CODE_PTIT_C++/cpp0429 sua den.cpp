#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, k, b; cin>>n>>k>>b;
	int a[n+1];
	fill(a, a + n + 1, 1);
	for(int i = 0; i < b; i++){
		int x;
		cin>>x;
		a[x] = 0;
	}
	int cnt = 0;
	for(int i = 1; i <= k; i++){
		if(!a[i]) ++cnt;
	}
	int ans = cnt;
	for(int i = k + 1 ; i <= n; i++){
		if(!a[i - k]) --cnt;
		if(!a[i]) ++cnt;
		ans = min(ans, cnt);
	}
	cout<<ans<<'\n';
}