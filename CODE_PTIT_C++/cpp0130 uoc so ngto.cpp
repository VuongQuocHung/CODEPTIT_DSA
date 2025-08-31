#include <bits/stdc++.h>
using namespace std;
long long maxx(long long n){
	long long r;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			r = i;
			while(n%i==0) n/=i;
		}
	}
	if(n>1) r = n;
	return r;
}
int main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		cout<<maxx(n)<<"\n";
	}
}