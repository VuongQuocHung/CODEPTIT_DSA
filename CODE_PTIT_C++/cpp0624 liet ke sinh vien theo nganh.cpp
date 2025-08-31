#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Student{
private:
	string msv, ten, lop, email;
public:
	friend istream& operator>>(istream& in, Student& sv){
		scanf("\n");
		getline(in, sv.msv);
		getline(in, sv.ten);
		getline(in, sv.lop);
		getline(in, sv.email);
		return in;
	}
	friend ostream& operator<<(ostream& out, Student& sv){
		out << sv.msv << ' ' << sv.ten << ' ';
		out << sv.lop << ' ' << sv.email << "\n\n";
		return out;
	}
	string getNganh(){
		return msv.substr(5, 2);
	}
	string getLop(){
		return lop;
	}
};
string solve(string s){
	if(s == "KE TOAN") return "KT";
	if(s == "CONG NGHE THONG TIN") return "CN";
	if(s == "AN TOAN THONG TIN") return "AT";
	if(s == "VIEN THONG") return "VT";
	return "DT";
}
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
		scanf("\n");
		string s; getline(cin, s);
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		string major = solve(s);
		cout << "DANH SACH SINH VIEN NGANH " << s << ":\n\n";
		for(int i = 0; i < n; i++){
			if(major == "CN" || major == "AT"){
				if(major == ds[i].getNganh() && ds[i].getLop()[0] != 'E') 
					cout << ds[i];
			}else{
				if(major == ds[i].getNganh()){
					cout << ds[i];
				}
			}
		}
	}
} 