#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n];
		int maxx = 0;
		for(int i = 0; i < n; i++){
			cin>>a[i];
			maxx = max(maxx, a[i]);
		}
		sort(a, a + n);
		if(a[0] == maxx){
			cout<<"-1\n";
		}else{
			cout<<a[0]<< ' '<<a[1]<<'\n';
		}
	}
}