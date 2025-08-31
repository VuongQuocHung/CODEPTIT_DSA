#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t; getchar();
	while(t--){
		string a; cin>>a;
		long long b,m; cin>>b>>m;
		long long num = 0;
		for(char c : a){
			num = ( num * 10 + (c-'0') ) % m;
		}
		for(int i = 2; i<=b; i++){
			num = ( (num % m) * ( num % m) ) % m;
		}
		cout<<num<<"\n";
	}
}