#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
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

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	sang();
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int ok = 0;
		for(int i = 2; i <= n/2; i++){
			if(primes[i] && primes[n - i]){
				ok = 1;
				cout << i << ' ' << n - i << '\n';
				break;
			}
		}	
		if(!ok) cout << -1 << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//