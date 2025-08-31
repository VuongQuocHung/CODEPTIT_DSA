#include <bits/stdc++.h>
#define ll long long
using namespace std;
void minn( string& s1, string& s2){
	int n = s1.size(), m = s2.size();
	for(int  i = 0; i<n; i++){
		if(s1[i] == '6') s1[i] = '5';
	}
	for(int  i = 0; i<m; i++){
		if(s2[i] == '6') s2[i] = '5';
	}
}
void maxx( string& s1, string& s2){
	int n = s1.size(), m = s2.size();
	for(int  i = 0; i<n; i++){
		if(s1[i] == '5') s1[i] = '6';
	}
	for(int  i = 0; i<m; i++){
		if(s2[i] == '5') s2[i] = '6';
	}
}
ll tong(const string& s1, const string& s2){
	ll a = stoll(s1), b = stoll(s2);
	return a+b;
}
int main(){
	int t; cin>>t; getchar();
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		minn(s1, s2);
		cout<<tong(s1, s2)<<" ";
		maxx(s1,s2); 
		cout<<tong(s1, s2)<<"\n";
	}
}