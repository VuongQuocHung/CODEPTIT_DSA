#include <bits/stdc++.h>
using namespace std;
int solve(int a[], int n, int k){
	unordered_map<int, int> mp;
	int cnt = 0;
	for(int i = 0; i<n; i++){
		int tmp = k - a[i];
		if( mp[tmp] > 0) cnt += mp[tmp];
		mp[a[i]]++;
	}
	return cnt;	
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t;
    //while(t--){
    	int n,k ; cin>>n>>k;
    	int a[n];
    	for(int& i : a){
    		cin>>i;
		}
		cout<<solve(a, n, k)<<'\n';
	//}
}