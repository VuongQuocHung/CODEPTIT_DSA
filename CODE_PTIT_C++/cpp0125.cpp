#include <bits/stdc++.h>
using namespace std;
int check(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t; cin>>t; 
	while(t--){
	    int a,b; cin>>a>>b;
	    if(a>b){
		    int k=a; a=b; b=k;
	    }
	    for(int i=a; i<=b; i++){
		    if(check(i)) cout<<i<<" ";
	    }
	    cout<<"\n";
    } 
}