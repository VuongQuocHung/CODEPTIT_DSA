#include <bits/stdc++.h>
using namespace std;
string number = "0123456789";
int isNumber( string& s){
	if(s[0] == '0') return 0;
	for( char c : s){
		if(!isdigit(c)) return 0;
	}
	return 1;
}
void testcase(){
	string s; cin>>s; int cnt = 0;
	if(!isNumber(s)){
		cout<<"INVALID\n"; return;
    }
    set<char> digits;
    for(char c : s){
    	if(c >= '0' && c <= '9') digits.insert(c);
	}
	if(digits.size() == 10) cout<<"YES\n";
	else cout<<"NO\n";
}
int main(){
	int t; cin>>t; getchar();
	while(t--){
		testcase();
	}
}