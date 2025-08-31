#include <bits/stdc++.h>
#define ll long long
using namespace std;
int stt = 1;
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
	bool operator<(Student& other){
		return msv < other.msv;
	}
};
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	vector<Student> ds;
	Student sv;
	while(cin >> sv){
		ds.push_back(sv);
	}
	sort(ds.begin(), ds.end());
	for(int i = 0; i < (int)ds.size(); i++){
		cout << ds[i];
	}
} 