#include <bits/stdc++.h>
using namespace std;
int tang( int s){
	int x = s%10; s/=10;
	while(s>0){
		int y = s%10;
		if(x<=y) return 0;
		x = y;
		s/=10;
	}
	return 1;
}
int giam(int s){
    int x = s%10; s/=10;
	while(s>0){
		int y = s%10;
		if(x>=y) return 0;
		x = y;
		s/=10;
	}
	return 1;
}
int nt(int n){
	if(n<2 ) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int cnt = 0;
		for(int i = pow(10,n-1); i<pow(10,n); i++){
			if( (tang(i) || giam(i)) && nt(i)){
				++cnt;
			}
		}
		cout<<cnt<<"\n";
	}
}