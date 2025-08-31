#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n, k; cin>>n>>k; 
		vector<int> a(n);
		for(int& i : a) cin>>i;
		sort(a.begin(), a.end());
		//int cnt = count(a.begin(), a.end(), a[k-1]);
		cout<<a[k-1]<<'\n';
	}
}