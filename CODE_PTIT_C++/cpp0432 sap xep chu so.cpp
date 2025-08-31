#include <bits/stdc++.h>
using namespace std;
bool cmp(int x, int y){
	string a = to_string(x), b = to_string(y);
	return (a+b) > (b+a);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n];
		for(int& i : a) cin>>i;
		sort(a, a + n, cmp);
		for(int i : a) cout<<i;
		cout<<'\n';
	}
}