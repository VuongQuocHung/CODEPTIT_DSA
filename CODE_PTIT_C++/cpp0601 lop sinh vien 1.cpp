#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
class SinhVien{
	private:
		string ten, lop, ns;
		double gpa;
	public:
		string chuanHoaNS(){
			string date = ns;
			if(date[1] == '/') date = date.insert(0, "0");
			if(date[4] == '/') date = date.insert(3, "0");
			return date;
		}
		void nhap(){
			getline(cin, ten);
			getline(cin, lop);
			getline(cin, ns);
			cin >> gpa; cin.ignore();
		}
		void xuat(){
			cout << "B20DCCN001 " << ten << ' ' << lop << ' ' << chuanHoaNS() << ' ';
			cout << fixed << setprecision(2) << gpa << '\n';
		}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}