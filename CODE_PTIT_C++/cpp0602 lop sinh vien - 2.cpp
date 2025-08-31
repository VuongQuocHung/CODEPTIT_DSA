#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
class SinhVien{
	private:
		string ten, lop, ns;
		double gpa;
	public:
		friend istream& operator>>(istream& in, SinhVien& sv){
			getline(in, sv.ten);
			getline(in, sv.lop);
			getline(in, sv.ns);
			in >> sv.gpa;
			in.ignore();
			return in;
		}
		string chuanHoaNS(){
			string date = ns;
			if(date[1] == '/') date = date.insert(0, "0");
			if(date[4] == '/') date = date.insert(3, "0");
			return date;
		}
		friend ostream& operator<<(ostream& out, SinhVien& sv){
			out << "B20DCCN001 " << sv.ten << ' ' << sv.lop << ' ';
			out << sv.chuanHoaNS() << ' ' << fixed << setprecision(2) << sv.gpa << '\n';
			return out;
		}
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}