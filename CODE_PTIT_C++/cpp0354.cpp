#include <bits/stdc++.h>
using namespace std;
int dd[1000];
void testcase(){
	string s; cin>>s; int n = s.length();
	for(int i = 0; i<n; i++){
		int x = s[i]; dd[x]++;
	}
	for(int i = 0; i<n; i++){
		int x = s[i];
		if(dd[x] > 0){
			cout<<s[i]<<dd[x]; dd[x] = 0;
		}
	}
	cout<<"\n";
}
int main(){
	int t; cin>>t;
	while(t--){
		testcase();
	}
}