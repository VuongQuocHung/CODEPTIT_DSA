#include <bits/stdc++.h>
using namespace std;
void nhap(int x, int y, int a[][100]){
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++) cin>>a[i][j];
	}
}
int main(){
	int n,m,p; cin>>n>>m>>p;
	int a[n][100], b[m][100];
	nhap(n,m,a); nhap(m,p,b);
	long long c[n][p];
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			c[i][j] = 0;
			for(int k=0; k<m; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
}