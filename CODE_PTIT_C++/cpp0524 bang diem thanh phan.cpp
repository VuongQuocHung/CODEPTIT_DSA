#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv, ten, lop;
	double a, b, c;
};
void nhap(SinhVien &sv){
	cin.ignore();
	getline(cin, sv.msv);
	getline(cin, sv.ten);
	getline(cin, sv.lop);
	cin >> sv.a >> sv.b >> sv.c;
}
bool cmp(SinhVien a, SinhVien b){
	return a.msv < b.msv;
}
void sap_xep(SinhVien a[], int n){
	sort(a, a + n, cmp);
}
void in_ds(SinhVien sv[], int n){
	for(int i = 0; i < n; i++){
		cout << i + 1 << ' ';
		cout  << sv[i].msv << ' ' << sv[i].ten << ' ' << sv[i].lop << ' ';
		cout << fixed << setprecision(1) << sv[i].a << ' ';
		cout << fixed << setprecision(1) << sv[i].b << ' ';
		cout << fixed << setprecision(1) << sv[i].c << "\n\n";
	}
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}