#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(ll a, ll b) : tu(a), mau(b){
		}
		friend istream& operator>>(istream& in, PhanSo& ps){
			in >> ps.tu >> ps.mau;
			ps.rutgon();
			return in;
		}
		friend ostream& operator<<(ostream& out, PhanSo ps){
			out << ps.tu << "/" << ps.mau << '\n';
			return out;
		}
		void rutgon(){
			ll k = __gcd(tu, mau);
			tu /= k;
			mau /= k;
		}
		PhanSo operator + (PhanSo& other){
			ll new_tu = tu * other.mau + other.tu * mau;
			ll new_mau = mau * other.mau;
			PhanSo res(new_tu, new_mau);
			res.rutgon();
			return res;
		}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}