#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n][m], b[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin>>a[i][j];
				b[i][j] = a[i][j];
			}
		}
		int tren = 0, trai = 0;//hàng trên cùng, cột trái ngoài cùng
		int duoi = n - 1, phai = m - 1;//hàng dưới cùng, cột phải ngoài cùng
		while(tren <= duoi && trai <= phai){
			//xoay hàng trên cùng
			for(int i = trai + 1; i <= phai; i++){
				a[tren][i] = b[tren][i - 1];
			}
			//xoay cột ngoài cùng phải
			for(int i = tren + 1; i <= duoi; i++){
				a[i][phai] = b[i - 1][phai];
			}
			//xoay hàng dưới cùng
			if(trai <= phai){
				for(int i = phai - 1; i >= trai; i--){
					a[duoi][i] = b[duoi][i + 1];
				}
			}
			//xoay cột ngoài cùng trái
			if(tren <= duoi){
				for(int i = duoi - 1; i >= tren; i--){
					a[i][trai] = b[i + 1][trai];
				}
			}
			++tren; ++trai;
			--duoi; --phai;
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++) cout<<a[i][j]<<' ';
		}
		cout<<'\n';
	}
}