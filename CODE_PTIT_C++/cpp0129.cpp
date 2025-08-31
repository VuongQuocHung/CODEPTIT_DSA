#include <bits/stdc++.h>
using namespace std;
int solve(int a, int b){
	int cnt = 0;
	for(int i=1; i <= a; i++){
		if( i%b == 0){
			int tmp = i;
			while(tmp % b == 0){
				++cnt;
				tmp/=b;
			}
		}
	}
	return cnt;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n, p; cin>>n>>p;
		cout<<solve(n,p)<<"\n";
	}
}