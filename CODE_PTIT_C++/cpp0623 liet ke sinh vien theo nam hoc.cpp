#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Student{
private:
	string msv, ten, lop, email;
public:
	friend istream& operator>>(istream& in, Student& sv){
		scanf("\n");
		getline(cin, sv.msv);
		getline(cin, sv.ten);
		getline(cin, sv.lop);
		getline(cin, sv.email);
		return in;
	}
	friend ostream& operator<<(ostream& out, Student& sv){
		cout << sv.msv << ' ' << sv.ten << ' ';
		cout << sv.lop << ' ' << sv.email << "\n\n";
		return out;
	}
	string getNamHoc(){
		return lop.substr(1, 2);
	}
};
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	int n; cin >> n;
	vector<Student> ds(n);
	for(int i = 0; i < n; i++){
		cin >> ds[i];
	}
	int t; cin >> t;
	while(t--){
		string namHoc, khoa;
		cin >> namHoc;
		khoa = namHoc.substr(2, 2);
		cout << "DANH SACH SINH VIEN KHOA " << namHoc << ":\n\n";
		for(int i = 0; i < n; i++){
			if(ds[i].getNamHoc() == khoa ) cout << ds[i];
		}
	}
} 