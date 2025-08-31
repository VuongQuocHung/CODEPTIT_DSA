#include <bits/stdc++.h>
using namespace std;
int dd[1000001];
void solve(){
	memset(dd, 0, sizeof(dd));
	int n; cin>>n; int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i]; 
		dd[a[i]]++;
	}
	int cnt = 0;
	for(int i=0; i<n; i++){
		if(dd[a[i]] > 1){
			//cout<<a[i]<<" "<<dd[a[i]]<<"\n";
			++cnt;
		}
	}
	cout<<cnt<<"\n";
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}