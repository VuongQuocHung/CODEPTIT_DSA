#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		set<int> se;
		for(int i = 0; i<n; i++){
			cin>>a[i];
			while(a[i] > 0){
				se.insert(a[i]%10);
				a[i]/=10;
			}
		}
		for(auto it = se.begin(); it != se.end(); ++it){
			cout<<*it<<' ';
		}
		cout<<'\n';
	}
}