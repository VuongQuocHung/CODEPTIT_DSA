#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n];
		int maxx = 0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i] > maxx) maxx = a[i];
		}
		cout<<maxx<<"\n";
	}
}