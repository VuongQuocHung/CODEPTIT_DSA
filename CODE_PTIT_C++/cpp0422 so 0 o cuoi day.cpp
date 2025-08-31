#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    	int n; cin>>n; 
    	vector<ll> res;
    	ll num;
    	for(int i = 0; i<n; i++){
    		cin>>num;
    		if(num > 0) res.push_back(num);
		}
        while( res.size() < n) res.push_back(0);
        for(ll& i : res) cout<<i<<' ';
        cout<<"\n";
	}
	return 0;
}