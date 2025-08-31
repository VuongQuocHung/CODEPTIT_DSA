#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(ll a, ll b){
		}
		friend istream& operator>>(istream& in, PhanSo& ps){
			in >> ps.tu >> ps.mau;
			return in;
		}
		friend ostream& operator<<(ostream& out, PhanSo& ps){
			out << ps.tu << "/" << ps.mau << '\n';
			return out;
		}
		void rutgon(){
			ll k = __gcd(tu, mau);
			tu /= k;
			mau /= k;
		}
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}