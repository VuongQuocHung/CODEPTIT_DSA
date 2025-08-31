#include <bits/stdc++.h>
using namespace std;
void testcase(){
	int n,k ; cin>>n>>k;
	int cnt = 0;
	for(int i = 2; i*i<=n; i++){
		while(n%i == 0){
			++cnt;
			n/=i;
			if(cnt == k){
				cout<<i<<"\n"; return;
			}
		}
	}
	if(n>1) ++cnt;
	if(cnt == k) cout<<n<<"\n";
	else cout<<"-1\n";
}
int main(){
	int t; cin>>t;
	while(t--){
		testcase();
	}
}