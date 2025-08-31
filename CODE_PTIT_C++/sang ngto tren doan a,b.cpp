#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*void sang(ll a, ll b){
	int dd[b-a+1];
	for(ll i=a; i<=b; i++){
		dd[i-a] = 1;
	}
	for(ll i=2; i<=sqrt(b); i++){
		for(ll j=max(i*i, (a+i-1)/i*i); j<=b; j+=i){
			dd[j-a] = 0; 
		}
	}
	for(ll i = max(2ll, a); i<=b; i++){
		if(dd[i-a]) cout<<i<<" ";
	}
}*/
void sang(ll L, ll  R){
	int prime[R - L + 1];
	for(ll i = L; i <= R; i++){
		prime[i - L] = 1;
	}
	for(ll i = 2; i <= sqrt(R); i++){
		for(ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i){
			prime[j - L] = 0;
		}
	}
	for(ll i = max(2ll, L); i <= R; i++){
		if(prime[i - L]){
			cout << i << ' ';
		}
	}
}

int main(){
	ll a,b; cin>>a>>b;
	if(a>b){
		ll k = a; a = b; b = k;
	}
	sang(a,b);
}