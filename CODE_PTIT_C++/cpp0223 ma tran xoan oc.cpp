#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n, m; cin>>n>>m; int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++) cin>>a[i][j];
		}
	    int mt[n*m], cnt = 0;
		int top = 0, bot = n - 1;//trên cùng và dưới cùng
		int left = 0, right = m - 1;//ngoài cùng trái và ngoài cùng phải
		while( top <= bot && left <= right ){
			//in hàng trên cùng từ trái qua phải
			for(int k = left; k <= right; k++){
				mt[cnt++] = a[top][k];
			}
			++top;
			//in cột ngoài cùng phải từ trên xuống dưới
			for(int k = top; k <= bot; k++){
				mt[cnt++] = a[k][right];
			}
			--right;
			//in hàng dưới cùng từ phải qua trái
			if(top <= bot){
				for(int k = right; k >= left; k--){
					mt[cnt++] = a[bot][k];
				}
				--bot;
			}
			//in cột ngoài cùng trái từ dưới lên trên
			if(left <= right){
				for(int k = bot; k >= top; k--){
					mt[cnt++] = a[k][left];
				}
				++left;
			}
		} 
		for(int i = 0; i < cnt; i++) cout<<mt[i]<<' ';
			cout<<'\n';
	}
}
