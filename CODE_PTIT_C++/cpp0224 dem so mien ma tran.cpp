#include <bits/stdc++.h>
#define ll long long
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
using namespace std;
int n, m;
int a[101][101];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
void nhap(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) cin >> a[i][j];
	}
}
void loang(int i, int j){
	a[i][j] = 0;
	for(int k = 0; k < 8; k++){
		int i1 = i + dx[k], j1 = j + dy[k];
		while(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1]){
			loang(i1, j1);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		int dem = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j]){
					++dem;
					loang(i, j);
				}
			}
		}
		cout << dem << '\n';
	}
}