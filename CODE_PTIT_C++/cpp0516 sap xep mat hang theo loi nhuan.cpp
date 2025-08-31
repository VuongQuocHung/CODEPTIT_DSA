#include <bits/stdc++.h>
using namespace std;
struct item{
	int id;
	string ten, loai;
	double gia_ban, gia_mua;
	double loi_nhuan;
};
void nhap(item a[], int n){
	for(int i = 0; i<n; i++){
		scanf("\n");
		a[i].id = i+1;
		getline(cin, a[i].ten);
		getline(cin, a[i].loai);
		cin>>a[i].gia_ban>>a[i].gia_mua;
		a[i].loi_nhuan = a[i].gia_mua - a[i].gia_ban;
	}
}
bool cmp(item a, item b)
{
    return a.loi_nhuan > b.loi_nhuan;
}
void sapxep(item a[], int n){
	sort(a, a + n, cmp);
}
void in(item a[], int n){
	for(int i = 0; i<n; i++){
		cout<<a[i].id<<' '<<a[i].ten<<' '<<a[i].loai<<' ';
		cout<<fixed<<setprecision(2)<<a[i].loi_nhuan<<'\n';
	}
}
int main(){
	int n; cin>>n;
	struct item a[n];
	nhap(a, n);
	sapxep(a, n);
	in(a, n);
	return 0;
}