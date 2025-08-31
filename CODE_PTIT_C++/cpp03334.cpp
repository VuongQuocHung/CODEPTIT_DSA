#include <bits/stdc++.h>
using namespace std;
void testcase(){
	string s; cin>>s;
	int res = 0, sum = 0;
	int i = 0;
	while(i < s.length()){
		while(isdigit(s[i])){
			sum = sum * 10 + s[i] - '0';
			i++;
		}
		i++;
		res += sum;
		sum = 0;
	}
	cout<<res<<"\n";
}
int main(){
	int t; cin>>t; getchar();
	while(t--){
		testcase();
	}
}