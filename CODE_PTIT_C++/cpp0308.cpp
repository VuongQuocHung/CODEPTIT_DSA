#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int dd[26]={};
		for(int i=0; i<s.length(); i++){
			dd[s[i] - 'A']++;
		}
		for(int i=0; i<s.length(); i++){
			if(dd[s[i]-'A']==1) cout<<s[i];
		}
		cout<<"\n";
	}
}