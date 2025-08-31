#include <bits/stdc++.h>
using namespace std;
int check( const string &s){
	if(s[0] == s[1] && s[1] == s[2] && s[2] == s[4] && s[4] == s[5]) return 1;
	if(s[0] < s[1] && s[1] < s[2] && s[2] < s[4] && s[4] < s[5]) return 1;
	if(s[0] == s[1] && s[1] == s[2] && s[4] == s[5]) return 1;
	for(int i = 0; i<5; i++){
		if( s[i] != '6' && s[i] != '8' && i != 3) return 0;
	}
	return 1;
}
void testcase(){
	string s; getline(cin, s);
	stringstream ss(s);
	string word; vector<string> v;
	while( getline(ss, word, '-')){
		v.push_back(word);
	}
	//cout<<v[1]<<"\n";
	if( check(v[1]) ) cout<<"YES\n";
	else cout<<"NO\n";
}
int main(){
	int t; cin>>t; getchar();
	while(t--){
		testcase();
	}
}