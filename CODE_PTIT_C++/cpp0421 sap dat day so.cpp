#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(ll a[], int n){
	unordered_set<ll> se( a, a + n);
	for(int i = 0; i<n; i++){
		if(se.find(i) != se.end()) cout<<i<<' ';
		else cout<<"-1 ";
	}
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    	int n; cin>>n; 
    	ll num;
    	ll a[n];
    	for(int i = 0; i<n; i++){
    		cin>>a[i];
		}
    	solve(a, n);
    	cout<<'\n';
	}
}