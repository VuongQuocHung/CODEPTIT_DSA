#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin>>a[i];
			b[i] = a[i];
		}
		int x = a[1], y = a[n-2];
		for(int i = 1; i < n-1; i++){
			a[i] = b[i-1] *b[i+1];
		}
		a[0] = a[0] * x; 
		a[n-1] = a[n-1] * y;
		for(int i : a) cout<<i<<' ';
		cout<<'\n';
	}
}