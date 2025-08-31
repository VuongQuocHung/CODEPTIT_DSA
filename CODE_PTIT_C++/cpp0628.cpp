#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define fspr(n) fixed << setprecision(n)

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;
using vll = vector<long long>;
using vpi = vector<pair<int, int>>;
using vpp = vector<pair<pair<int, int>, int>>;

class city{
private:
	string ma, ten;
	int so_lg;
public:
	city(string ma, string ten, int so_lg){
		this->ma = ma;
		this->ten = ten;
		this->so_lg = so_lg;
	}
	void in(){
		cout << ma << ' ' << ten << ' ' << so_lg << '\n';
	}
	bool operator<(city& other){
		if(so_lg != other.so_lg) return so_lg > other.so_lg;
		return ma < other.ma;
	}
};
int main(){
	hung;

	int n; cin >> n;
	vector<city> v;

	string ma, ten;
	int so_lg;

	FOR(i, 0, n - 1){
		cin.ignore();

		getline(cin, ma);
		getline(cin, ten);
		cin >> so_lg;
		city c(ma, ten, so_lg);

		v.push_back(c);
	}
	sort(v.begin(), v.end());
	FOR(i, 0, n - 1){
		v[i].in();
	}
}