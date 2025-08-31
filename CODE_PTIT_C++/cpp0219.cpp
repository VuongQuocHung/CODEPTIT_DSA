#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,m; cin>>n>>m; int a[n][m], b[n][m];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cin>>a[i][j]; b[j][j] = 0;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j]==1 && b[i][j]==0){
				int x = 0, y = 0;
				while(x < m){
					if(a[i][x] == 0){
						a[i][x] = 1; b[i][x]=1;
						x++;
					}
					else x++;
				}
				while( y<n){
					if(a[y][j] ==0){
						a[y][j] = 1; b[y][j] = 1;
						y++;
					}
					else y++;
				}
			}
	    }
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++) cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}