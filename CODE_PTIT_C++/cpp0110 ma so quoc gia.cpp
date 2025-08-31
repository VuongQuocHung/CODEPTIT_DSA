#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int k =s.length();
		for(int i=0; i<k; i++){
			if(s[i] == '0' && s[i+1] == '8' && s[i+2] =='4'){
				s.erase(i,3);
				break;
			}
		} 
		cout<<s<<"\n";
	}
}