#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
int snt(ll n){
	for(int  i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int shh(ll n){
	for(int p=2; p<=33; p++){
		if(snt(p)){
			ll a = pow(2,p)-1;
			if(snt(a)){
				ll b = pow(2, p-1);
				if(a*b==n) return 1;
			}
		}
	}
	return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
	    ll n; 
		cin>>n;
	    cout<<shh(n)<<"\n";
	}
}