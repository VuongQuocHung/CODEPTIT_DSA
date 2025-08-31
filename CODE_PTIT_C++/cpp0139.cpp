#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int tongcs(int a){
	int res = 0;
	while(a>0){
		res += a%10;
		a/=10;
	}
	return res;
}
int tong_cs_cua_ts(int a){
	int tong = 0;
	for(int i=2; i<=a; i++){
		while(a % i == 0){
			if(i<10) tong+=i;
			else tong += tongcs(i);
			a /= i;
		}
	}
	return tong;
}
int check(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 1;
	}
	return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n ; cin>>n;
		if(check(n) && tong_cs_cua_ts(n) == tongcs(n)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}