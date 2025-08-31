#include <bits/stdc++.h>
#define ll long long
using namespace std; 
int pmax = 1e7;
vector<int>primes;
vector<bool>is_prime(pmax + 1, true);
void seive(){
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= pmax; i++){
        if (is_prime[i]){
            primes.push_back(i);
            for (ll j = 1ll * i * i; j <= pmax; j += 1ll * i){
                is_prime[j] = false;
            }
        }
    }
}
void Solve(ll n){
    for (int i = 0; i < primes.size(); i++){
        int cnt = 0;
        while (n % primes[i] == 0){
            cnt++;
            n /= primes[i];
        }
        if (cnt > 0) cout << primes[i] << " " << cnt << endl;
    }
    if (n > 1) cout << n << " 1" << endl;
}
int main(){
    seive();
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        Solve(n);
        if (t > 0) cout << endl;
    }
}