#include<bits/stdc++.h>
using namespace std;
int tach_xau(string s, char a[][100], int m, int n){
	for(int i=0; i<s.length(); i++){
		if(s[i] == ' '){
			a[m][n]=0;
			if(n>0){
				m++;
			}
			n=0;
		}else a[m][n++] = s[i];
	}
	a[m][n]=0;
	return m;
}
int main(){
	string s; getline(cin, s);
	char a[100][100];
	int m = 0, n = 0;
	int k = tach_xau(s,a,m,n);
	cout<<k;
	for(int i=0; i<=k; i++){
		int length = sizeof(a[i]) / sizeof(a[i][0]);
		if(i == k){
			for(int j=0; j < length; j++){
				if(a[i][j]>='a' && a[i][j]<='z') a[i][j]-=32;
			}
		}else{
			for(int j=0; j < length; j++){
				if(j!=0){
					if(a[i][j]>='A' && a[i][j]<='Z') a[i][j]+=32;
				}else{
				    if(a[i][j]>='a' && a[i][j]<='z') a[i][j]-=32;
				}
			}
		}
	}
	for(int i=0; i<k; i++){
		if(i==k-1) cout<<a[i]<<", ";
		else cout<<a[i]<<" ";
	}	
	cout<<a[k]<<"\n";
}