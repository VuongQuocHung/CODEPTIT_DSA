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
int lcm( int a, int b){
	return a*b/gcd(a,b);
}
int solve(int x, int y, int z){ // tim so luong so chia het cho z tu x den y
	for(int i=x;;i++){
		if(i%z == 0){
			x=i; break;
		}
	for(int i=y;; i--)
	    if(i%z == 0){
	    	y = i; break;
		}
	}
	int res = (y-x)/z+1;
	return res;
}
int main(){
	int t; cin>>t; 
	while(t--){
	    int m,n,a,b; cin>>m>>n>>a>>b;
	    if(m>n){
		    int k = m; m=n; n=k; 
	    }
	    int d = lcm(a,b);
	    int x = solve(m,n,d), y = solve(m,n,a), z = solve(m,n,b);
	    cout<<y+z-x<<"\n";
    }
}