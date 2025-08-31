#include <iostream>
#include <cmath>
using namespace std;
int dd[10000001];
void sang(int n){
	for(int i=0; i<=n; i++) dd[i] = 1;
	dd[0] = 0; dd[1] = 0;
	for(int i=2; i<= sqrt(n); i++){
		if(dd[i]){
			for(int j = i*i; j<=n; j+=i){
				dd[j]=0;
			}
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; 
		sang(n);
		for(int i = 2; i<=n; i++){
			if(dd[i]) cout<<i<<" ";
		}
		cout<<"\n";
	}
}