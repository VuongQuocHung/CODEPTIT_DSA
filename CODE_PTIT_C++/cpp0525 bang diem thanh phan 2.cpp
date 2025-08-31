#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv, ten, lop;
	double a, b, c;
	void input(){
		cin.ignore();
		getline(cin, msv);
		getline(cin, ten);
		getline(cin, lop);
		cin >> a >> b >> c;
	}
	void output(){
		cout << msv << ' ' << ten << ' ' << lop << ' ';
		cout << fixed << setprecision(1) << a << ' ' << b << ' ' << c << '\n';
	}
};
bool cmp(SinhVien a, SinhVien b){
	return a.msv < b.msv;
}
int main(){
    int n;
    cin >> n;
    SinhVien ds[n];
    for(int i = 0; i < n; i++) {
    	ds[i].input();
	}
	sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i++){
    	cout << i + 1 << ' ';
    	ds[i].output();
	}
    return 0;
}