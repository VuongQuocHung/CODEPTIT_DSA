#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	if(a==0 || b==0) return a+b;
	while(b>0){
		long long x = a%b;
		a=b;
		b=x;
	}
	return a;
}
long long lcm( long long a, long long b){
	return a*b/gcd(a,b);
}
int main(){
	int t; cin>>t;
	while(t--){
		long long a,b,c,n; cin>>a>>b>>c>>n;
		long long y = lcm(a,b), x = lcm(y,c);
		if(x>=pow(10,n)) cout<<"-1\n";
		else{ 
		    long long p = pow(10,n-1), r = p/x * x;
		    if( r<p ) r = (p/x + 1) * x;
		    cout<<r<<"\n";
		}
	}
}