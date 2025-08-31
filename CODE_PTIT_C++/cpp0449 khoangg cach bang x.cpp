#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n, x; cin>>n>>x; 
		ll a[n];
		unordered_set<ll> se;
		for(ll& i : a){
			cin>>i;
			se.insert(i);
		}
		int ok = -1;
		for(int i = 0; i < n; i++){
			if(se.count(a[i] + x)){
				ok = 1;
				break;
			}
		}
		cout<<ok<<'\n';
	}
}