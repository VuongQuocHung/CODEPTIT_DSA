#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct PhanSo{
	ll tu, mau;
};
void nhap(struct PhanSo &a){
	cin>>a.tu>>a.mau;
}
ll gcd(ll a, ll b){
	while(b>0){
		ll x = a%b; a = b; b = x;
	}
	return a;
}
void in(struct PhanSo a){
	cout<<a.tu<<"/"<<a.mau;
}
void rutgon( struct PhanSo &a){
	ll x = gcd(a.tu, a.mau );
	a.tu/=x ; a.mau/=x;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}