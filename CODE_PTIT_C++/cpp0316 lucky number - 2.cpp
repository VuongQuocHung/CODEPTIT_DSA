#include <bits/stdc++.h>
using namespace std;
void solve(int &n){
	int sum = 0;
	while(n>0){
		sum += n%10;
		n/=10;
	}
	n = sum ;
}
void testcase(){
	string s; cin>>s;
	int num = 0;
	for( auto x : s) {
		num += x - '0';
	}
	while(num >= 10){
		solve(num);
	}
	cout<<(num == 9)<<"\n";
}
int main(){
	int t; cin>>t;
	getchar();
	while(t--){
		testcase();
	}
}