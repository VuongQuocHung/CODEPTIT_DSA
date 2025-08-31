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
long long lcm( int a, int b){
	return 1ll*a*b/gcd(a,b);
}
int main(){
	int t; cin>>t;
	while(t--){
	    int a, b; cin>>a>>b;
	    cout<<lcm(a,b)<<" "<<gcd(a,b)<<"\n";
    }
}