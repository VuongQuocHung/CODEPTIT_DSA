#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int stt = 1;
struct NhanVien{
	string id, ten, gt, dc, mst, nk;
	int d, m, y;
};
string STT(int i){
	string s = to_string(i);
	if (i < 10) s = "0000" + s;
    else s = "000" + s;
	return s;
}
bool cmp(NhanVien a, NhanVien b){
	if(a.y < b.y ) return 1;
	if( a.y == b.y ){
		if( a.m < b.m ) return 1;
		if( a.m == b.m ){
			if( a.d < b.d ) return 1;
		}
	}
	return 0;
}
void nhap(NhanVien& a){
	a.id = STT(stt);
	++stt;
	scanf("\n");
	getline( cin, a.ten );
	getline( cin, a.gt );
	scanf("%d/%d/%d\n", &a.m, &a.d, &a.y );
	getline( cin, a.dc );
	getline( cin, a.mst );
	getline( cin, a.nk );
}
void sapxep(NhanVien a[], int n){
	sort(a, a+n, cmp);
}
void inds(NhanVien a[], int n){
	for(int i = 0; i < n; i++){
		cout<<a[i].id<<' '<<a[i].ten<<' '<<a[i].gt<<' ';
		printf("%.2d/%.2d/%.4d  ", a[i].m, a[i].d, a[i].y);
		cout<<a[i].dc<<' '<<a[i].mst<<' '<<a[i].nk<<'\n';
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}