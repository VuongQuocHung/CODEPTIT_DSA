#include <bits/stdc++.h>
using namespace std;
int dd[10001];
void sang(){
	for(int i = 2; i <= 10000; i++) dd[i] = 1;
	dd[0] = 0; dd[1] = 0;
	for(int i = 2; i <= 100; i++){
		if(dd[i]){
			for(int j = i * i; j <= 10000; j+=i){
				dd[j] = 0;
			}
		}
	}
}
int main(){
	int t; cin>>t;
	sang();
	while(t--){
		int n; cin>>n;
		for(int i = 2; i <= n/2; i++){
		    if(dd[i] && dd[n-i]){
		    	cout<<i<<' '<<n-i;
		    	break;
			}	
		}
		cout<<'\n';
	}
}