#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string& s){
	s[0] = toupper(s[0]);
	for(int i = 1; i<s.length(); i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	int t; cin>>t; cin.ignore();
	while(t--){
		int tt; cin>>tt; cin.ignore();
		string s; getline(cin, s);
		stringstream ss(s);
		string word; 
		vector<string> ten;
		while(ss >> word){
			chuanhoa(word);
			ten.push_back(word);
		}
		int n = ten.size();
		if(tt==1){
			cout<<ten[n-1]<<" ";
			for(int i = 0; i<n-1; i++) cout<<ten[i]<<" ";
		}else{
			for(int i = 1; i<n; i++) cout<<ten[i]<<" ";
			cout<<ten[0]<<" ";
		}
		cout<<"\n";
	}
}