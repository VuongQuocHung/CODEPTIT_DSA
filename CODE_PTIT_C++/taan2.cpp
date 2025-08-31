#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t; getchar();
	while(t--){
		string s; getline(cin, s);
		string res = "";
		int i = 0;
		while(i <s.length()){
			if(i==0){
				if(s[i]=='+' && s[i+1]== '8' &&s[i+2]=='4'){
					res = res +'0';
					i = 3;
				}else if(s[i]=='8' && s[i+1]=='4'){
					res = res + '0';
					i = 2;
				}else if(isdigit(s[i])){
					res = res + s[i];
					i++;
				}else i++;
			}else {
				if(isdigit(s[i])){
					res = res + s[i];
					i++;
				}else i++;
			}
		}
		cout<<res<<'\n';
	}
}