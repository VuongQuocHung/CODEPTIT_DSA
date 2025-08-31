#include <bits/stdc++.h>
using namespace std;
int snt(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<"1 ";
		for(int i = 2; i<=n; i++){
			if(i%2==0) {
			    cout<<"2 ";
			}
			else{
				if(snt(i)) cout<<i<<" ";
				else{
					for(int j=3; j<=sqrt(i); j+=2)
					    if(i%j==0){
					    	cout<<j<<" ";
					    	break;
						}
				}
			}
		}
		cout<<"\n";
	}
}