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
		cout << sv.lop << ' ' << sv.email << '\n';
		return out;
	}
	string getLop(){
		return lop;
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
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
		for(int i = 0; i < (int)ds.size(); i++){
			if(ds[i].getLop() == s )cout << ds[i];
		}
	}
} 