#include <bits/stdc++.h>
using namespace std;
int check(string s){
	int n = s.length(), l = 0, r = n-1;
	while(l<=r){
		if(s[l]%2 != 0 || s[r]%2 != 0) return 0;
		if(s[l] != s[r]) return 0;
		++l; --r;
	}
	return 1;
}
int main(){
	int t; cin>>t; getchar();
	while(t--){
		string s; cin>>s;
		if(check(s)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}