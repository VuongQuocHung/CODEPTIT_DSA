#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
//Định lý Fermat :
//Nếu p là 1 số nguyên tố và a ko chia hết cho p thì :
// a ^ (p - 1) = 1 (mod p) = 1;
//suy ra a ^ (p - 2) = a ^ - 1 (mod p)
// Hàm nhân modulo tránh tràn số
ll mulmod(ll a, ll b, ll c) {
    ll res = 0;
    a = a % c;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res + a) % c;
        }
        a = (a * 2) % c;
        b /= 2;
    }
    return res;
}

// Hàm lũy thừa nhanh để tính (a^b) % c
ll power(ll a, ll b, ll c) {
    ll res = 1;
    a = a % c;
    while(b > 0){
        if(b % 2 == 1){
            res = (res * a) % c;
        }
        a = (a * a) % c;
        b /= 2;
    }
    return res;
}

void testcase(int& n, int& k){
	ll gt_n = 1, gt_k = 1;
	for(int i = n; i > n - k; --i){
        gt_n = mulmod(gt_n, i, mod);
    }
	for(int i = k; i >= 1; --i){
		gt_k = mulmod(gt_k, i, mod);
	}
	gt_k = power(gt_k, mod - 2, mod);
	cout << (gt_n * gt_k) % mod << '\n';
}
int main(){
	int t; cin>>t;
	while(t--){
		int n, r ; cin >> n >> r;
		testcase(n, r);
	}
}