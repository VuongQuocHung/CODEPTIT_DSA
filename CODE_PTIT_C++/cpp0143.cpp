#include <bits/stdc++.h>
using namespace std;
long long f[100];
long long fibo( int n){
	f[1] = 1; f[2] = 1;
	for(int i = 3; i<=n; i++) f[i] = f[i-1] + f[i-2];
	return f[n];
}
int main(){
	int t; cin>>t; 
	while(t--){
	    int n; cin>>n;
	    cout<<fibo(n)<<"\n";
    }
}