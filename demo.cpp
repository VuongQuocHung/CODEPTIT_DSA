#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

int primes[1000001];
void sang(){
	for(int i = 0; i < 1000001; i++)  
		primes[i] = 1;
	primes[0] = primes[1] = 0;
	for(int i = 2; i * i <= 1000000; i++){
		if(primes[i]){
			for(int j = i * i; j <= 1000000; j += i){
				primes[j] = 0;
			}
		}
	}
}

int check1(int n){
	int cnt = 0;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			if(primes[i]) ++cnt;
			if(primes[n/i] && n/i != i) ++cnt;
			if(cnt >= 3) return 1;
		}
	}
	return cnt >= 3;
}

int check2(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	if((sum % 10) == 8) return 1;
	return 0;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	sang();
	int a,b; cin >> a >> b;
	int ok = 0;
	FOR(i, a, b){
		if(check2(i) && check1(i)){
			ok = 1;
			cout << i << " ";
		}
	}
	if(!ok) cout << "28tech";

	return 0;
}

//_______________________________B23DCCN375_______________________________//
