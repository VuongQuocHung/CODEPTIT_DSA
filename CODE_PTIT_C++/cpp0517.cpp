#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten, gt, sn, dc, mst, nk;
};
string stt(int n){
	string r = to_string(n);
	while(r.length() < 5){
		r = '0' + r;
	}
	return r;
}
void nhap(struct NhanVien &a){
	scanf("\n");
	getline(cin, a.ten);
	getline(cin, a.gt ); 
	getline(cin, a.sn );
	getline(cin, a.dc ); 
	getline(cin, a.mst ); 
	getline(cin, a.nk );
}
void inds(struct NhanVien a[], int n){
	for(int i=0; i<n; i++){
		cout<<stt(i+1)<<" ";
		cout<<a[i].ten<<" "<<a[i].gt<<" "<<a[i].sn<<" "<<a[i].dc<<" "<<a[i].mst<<" "<<a[i].nk<<"\n";
   }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}