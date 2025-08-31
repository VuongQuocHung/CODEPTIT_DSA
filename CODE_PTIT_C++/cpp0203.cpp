#include <bits/stdc++.h>
using namespace std;
/*int cmp( const void* a, const void* b){
	const int* x = (int*)a;
	const int* y = (int*)b;
	return *x - *y;
}*/
int b[1000001];
int solve(){
	memset(b,0,sizeof(b));
	int n; cin>>n; int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		if( a[i] > 0 ) b[a[i]]=1;
	}
	for(int i=1; i<1000001; i++){
		if(b[i] == 0) return i;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cout<<solve()<<"\n";
	}
}