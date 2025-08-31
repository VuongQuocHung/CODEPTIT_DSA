#include <bits/stdc++.h>
using namespace std;
int id = 1;
class SinhVien{
private:
	string msv, ten, lop, ns;
	double gpa;
public:
	friend istream& operator>>(istream& in, SinhVien& sv){
		in.ignore();
		sv.setMSV();
		getline(in, sv.ten);
		getline(in, sv.lop);
		getline(in, sv .ns);
		in >> sv.gpa;
		return in;
	}
	string chuanHoaNS(){
		string date = ns;
		if(date[1] == '/') date = date.insert(0, "0");
		if(date[4] == '/') date = date.insert(3, "0");
		return date;
	}
	void setMSV(){
		string ma = to_string(id);
		while(ma.length() < 3) ma = "0" + ma;
		++id;
		msv = "B20DCCN" + ma;
	}
	friend ostream& operator<<(ostream& out, SinhVien& sv){
		out << sv.msv << ' ' << sv.ten << ' ' << sv.lop << ' '; 
		out << sv.chuanHoaNS() << ' ';
		out << fixed << setprecision(2) << sv.gpa << '\n';
		return out;
	}
};
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
    // #endif
	SinhVien ds[50];
	int N, i;
	cin >> N;
	for(i=0;i<N;i++){
		cin >> ds[i];
	}
	for(i=0;i<N;i++){
		cout << ds[i];
	}
	return 0;
}