#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int stt = 1;
class Student{
private:
	string msv, ten, lop, email;
public:
	void nhap(){
		getline(cin, msv);
		getline(cin, ten);
		getline(cin, lop);
		getline(cin, email);
	}
	void xuat(){
		cout << msv << ' ' << ten << ' ' <<  lop << ' ' << email << '\n';
	}
	bool operator<(Student& other){
		if(lop != other.lop) return lop < other.lop;
		return msv < other.msv;
	}
};
int main(){
	hung;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n; cin >> n; cin.ignore();
	vector<Student> ds(n);
	for(int i = 0; i < n; i++){
		ds[i].nhap();
	}
	sort(ds.begin(), ds.end());
	for(int i = 0; i < n; i++){
		ds[i].xuat();
	}
} 