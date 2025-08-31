#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> sang(ll n){
	vector<ll> check(n+1, 1);
	vector<ll> ngto;
	check[0] = 0; check[1] = 0;
	for(ll i = 2; i <= sqrt(n); i++){
		if(check[i]){
			ngto.push_back(i);
			for(ll j = i * i; j <= n; j += i){
				check[j] = 0;
			}
		}
	}
	for(ll i = sqrt(n) + 1; i <= n; i++){
		if(check[i]){
			ngto.push_back(i);
		}
	}
	return ngto;
} 
void phantich(ll n, vector<ll> nt){
	for(ll i : nt){
		if(i * i > n) break;
		if(n%i == 0){
		    int cnt = 0;
		    while( n % i == 0){
			    n/=i;
			    ++cnt;
			}
			cout<<i<<' '<<cnt<<'\n';
		}	
	}
	if(n>1) cout<<n<<" 1"<<'\n';
}
int main(){
	int t; cin>>t;
	vector<ll> ngto = sang(10000000);
	while(t--){
		ll n; cin>>n;
		phantich(n, ngto);
		cout<<'\n';
	}
}