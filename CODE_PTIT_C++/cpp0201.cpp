#include <bits/stdc++.h>
using namespace std;
int cmp( const void* a, const void* b){
	const int* x = (int*)a;
	const int* y = (int*)b;
	return *x - *y;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++ ) cin>>a[i];
		int minn = 1000000001;
		qsort(a, n, sizeof(int), cmp);
		for(int i=0; i<n-1; i++){
			int x = abs(a[i] - a[i+1]);
			if( minn > x) minn = x;
		}
		cout<<minn<<"\n";
	}
}