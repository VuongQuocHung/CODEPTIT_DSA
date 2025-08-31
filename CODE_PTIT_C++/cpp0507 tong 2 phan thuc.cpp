#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct PhanSo{
	ll tu, mau;
};
ll gcd( ll a, ll b){
	if( a == 0 || b == 0) return a+b;
	while(b>0){
		ll x = a%b;
		a = b ;
		b = x;
	}
	return a;
}
ll lcm( ll a, ll b){
	return a * b / gcd( a, b);
}
void nhap(PhanSo &a){
	cin>>a.tu>>a.mau;
}
void in(PhanSo a){
	cout<<a.tu<<"/"<<a.mau;
}
void rut_gon(PhanSo& a){
	ll k = gcd( a.tu, a.mau );
	a.tu/=k;
	a.mau/=k;
}
PhanSo tong(PhanSo a, PhanSo b){
	PhanSo t;
	//rut_gon(a); rut_gon(b);
	t.mau = lcm( a.mau, b.mau );
	t.tu = t.mau / a.mau * a.tu + t.mau / b.mau * b.tu;
	rut_gon(t);
	return t;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}