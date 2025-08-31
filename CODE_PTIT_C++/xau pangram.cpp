#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t; getchar();
	while(t--){
		string s; int k;
		cin>>s; 
		//getchar(); 
		cin>>k;
		int charcnt[26]; memset(charcnt, 0, sizeof(charcnt));
		for(char c : s){
			if(c >= 'a' && c<='z'){
				charcnt[c-'a']++;
			}
		}
		int missing_char = 0;// dem so ky tu con thieu
		for(int i=0; i<26; i++){
			if(charcnt[i] == 0) missing_char++;
		}
		if(missing_char <= k) cout<<"1\n";
		else cout<<"0\n";
	}
}