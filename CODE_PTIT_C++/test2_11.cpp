#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll a[], int n){
	if(n == 1) return a[0];
	vector<ll> dp(n, 0);
	dp[0] = a[0];
	dp[1] = max(a[0], a[1]);
	for(int i = 2; i < n; i++){
		dp[i] = max(dp[i-1], a[i] + dp[i-2]);
	}
	return dp[n-1];
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; ll a[n];
		for(ll& i : a) cin>>i;
		cout<<solve(a, n)<<'\n';
	}
}