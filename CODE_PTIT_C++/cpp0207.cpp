#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,d; cin>>n>>d; int a[n]; int b[n]; int cnt = 0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(i>=d) b[cnt++] = a[i];
		}
		int j = 0;
		for(int i=cnt; i<n; i++){
			b[i] = a[j++];
		}
		for(int i=0; i<n; i++) cout<<b[i]<<" ";
		cout<<"\n";
	}
}