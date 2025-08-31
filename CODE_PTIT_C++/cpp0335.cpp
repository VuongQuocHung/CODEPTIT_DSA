#include <bits/stdc++.h>
using namespace std;
void testcase(){
	string s; cin>>s;
	int maxx = -1, sum = 0;
	int i = 0;
	while(i < s.length()){
		while(isdigit(s[i])){
			sum = sum * 10 + s[i] - '0';
			i++;
		}
		i++;
		maxx = max({maxx, sum});
		sum = 0;
	}
	cout<<maxx<<"\n";
}
int main(){
	int t; cin>>t; getchar();
	while(t--){
		testcase();
	}
}