#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n];
		int sum = 0;
		for(int i = 0; i < n - 1; i ++){
			cin>>a[i];
			sum += a[i];
		}
		cout<<(n+1)*n/2 - sum<<'\n';
	}
}