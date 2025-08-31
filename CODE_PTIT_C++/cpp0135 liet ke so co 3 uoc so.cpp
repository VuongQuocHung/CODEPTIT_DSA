#include <bits/stdc++.h>
using namespace std;
#define ll long long
int dd[1000001];
void sang(){
	for(int i = 2; i <= 1000000; i++) dd[i] = 1;
	dd[0] = 0; dd[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(dd[i]){
			for(int j = i * i; j <= 1000000; j+=i){
				dd[j] = 0;
			}
		}
	}
}
int main(){
	int t; cin>>t;
	sang();
	while(t--){
		ll n; cin>>n;
		for(int i = 2; i <= sqrt(n); i++){
			if(dd[i]) cout<< i*i <<' ';
		}
		cout<<'\n';
	}
}