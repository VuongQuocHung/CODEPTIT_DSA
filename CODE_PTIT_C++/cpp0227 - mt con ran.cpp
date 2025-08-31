#include <bits/stdc++.h>
using namespace std;
void dao_nguoc(int a[], int x, int y){//a : bat dau b: ket thuc
	int l = x, r = y;
	while(l<r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l; --r;
	}
}
void solve(){
	int n; cin>>n; int a[n*n];
	for(int i=0; i<n*n; i++) cin>>a[i];
	for(int i=0; i<n*n; i++){
		if( i%n == 0 && (i/n)%2 != 0 ){
			dao_nguoc(a, i, i+n-1);
		}
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}