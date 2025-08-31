#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string name, date;
	double m1, m2, m3, tong;
};
void nhap(struct ThiSinh &a){
	getline(cin, a.name ); cin>>a.date;
	cin>>a.m1>>a.m2>>a.m3;
	a.tong = a.m1 + a.m2 + a.m3;
}
void in(struct ThiSinh a){
	cout<<a.name<<" "<<a.date<<" "<<setprecision(1)<<fixed<<a.tong;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}