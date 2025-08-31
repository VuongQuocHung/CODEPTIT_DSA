#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(ll a[], int n, ll x){
	int left = 0, right = n - 1;
	while( left <= right ){
		ll sum = a[left] + a[right];
		if(sum == x){
			return 1;
		}else if(sum > x) --right;
		else ++left;
	}
	return -1;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; 
		ll a[n];
		int x;
		for(ll& i : a){
			cin>>x;
			i = 1ll*x*x;
		}
		int ok = 1;
		sort(a, a + n);
		for(int i = n - 1; i >= 2; i--){
			int res = solve(a, i, a[i]);
			if(res != -1){
				cout<<"YES\n";
				ok = 0;
				break;
			}
		}
		if(ok){
			cout<<"NO\n";
		}
	}
	return 0;
}