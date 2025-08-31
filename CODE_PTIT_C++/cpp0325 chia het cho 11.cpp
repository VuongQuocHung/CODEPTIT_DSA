#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t; scanf("\n");
	while(t--){
		string s; cin>>s;
		int ch = 0, le = 0;
		for(int i = 1; i <= s.length(); ++i){
			if(i%2 != 0) le = le + s[i-1] - '0';
			else ch = ch + s[i-1] - '0';
		}
		//cout<<ch<<' '<<le<<'\n';
		int ans = abs(ch - le);
		if(ans % 11 == 0) cout<<"1\n";
		else cout<<"0\n";
	}
}