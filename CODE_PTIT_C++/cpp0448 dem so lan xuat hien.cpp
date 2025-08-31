#include <bits/stdc++.h>
using namespace std;
int dau(int a[], int n, int x){
	int  l = 0, r = n - 1, res = -1;
	while( l <= r ){
		int mid = (l + r)/2;
		if( a[mid] == x){
			res = mid;
			r = mid - 1;
		}else if( a[mid] > x) r = mid - 1;
		else l = mid + 1;
	} 
	return res;
}
int cuoi(int a[], int n, int x){
	int  l = 0, r = n - 1, res = -1;
	while( l <= r ){
		int mid = (l + r)/2;
		if( a[mid] == x){
			res = mid;
			l = mid + 1;
		}else if( a[mid] > x) r = mid - 1;
		else l = mid + 1;
	} 
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n, x; cin>>n>>x; int a[n];
		for(int i = 0; i < n; i++){
			cin>>a[i];
		}
		sort(a, a + n);
		int first = dau(a, n, x);
		if( first != -1) {
			int last = cuoi(a, n, x);
			cout<< last - first + 1 << '\n';
		}else cout<<"-1\n";
	}
}