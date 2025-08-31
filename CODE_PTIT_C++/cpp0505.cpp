#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct NhanVien{
	string name, gender, date, adr, vat, nk;
};
void nhap(struct NhanVien& a){
	getline(cin , a.name);
	cin>>a.gender>>a.date;
	getchar();
	getline(cin, a.adr);
	cin>>a.vat>>a.nk;
}
void in(struct NhanVien a){
	cout<<"00001 ";
	cout<<a.name<<" "<<a.gender<<" "<<a.date<<" "<<a.adr<<" "<<a.vat<<" "<<a.nk;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}