#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(a==0 || b==0) return a+b;
	while(b>0){
		int x = a%b;
		a=b;
		b=x;
	}
	return a;
}
int snt(int n){
	if(n<2) return 0;
	for(int  i=2; i<=sqrt(n); i++){
		if( n%i == 0) return 0;
	}
	return 1;
}
int solve(int n){
	int cnt = 1;
	for(int i=2; i<n; i++){
		if(gcd(i,n) == 1) ++cnt;
	}
	if(snt(cnt)) return 1;
	return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		int x; cin>>x;
		cout<<solve(x)<<"\n";
	}
}