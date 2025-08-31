#include <bits/stdc++.h>
using namespace std;
void testcase(){
	string s; getline(cin, s);
	stringstream ss(s);
	string num; int ch = 0, le = 0;
	while(ss >> num){
		int x = stoi(num);
		if(x % 2 == 0) ++ch;
		else ++le;
	}
	//cout<<ch<<" "<<le;
	if( ( ch + le )%2 ==0 && ch > le) cout<<"YES\n";
	else if( ( ch + le ) %2 != 0 && le > ch ) cout<<"YES\n";
	else cout<<"NO\n";
}
int main(){
	int t; cin>>t; getchar();
	while(t--){
		testcase();
	}
}