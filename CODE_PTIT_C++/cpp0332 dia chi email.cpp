#include<bits/stdc++.h>
using namespace std;
int tach_xau(string s, char a[][100], int m, int n){
	for(int i=0; i<s.length(); i++){
		if(s[i] == ' '){
			a[m][n] = 0;
			if(n>0){
				m++;
			}
			n=0;
		}else{
			if(s[i]>='A' && s[i]<='Z') s[i]+=32;
			a[m][n++]=s[i];
		}
	}
	a[m][n]=0; 
	return m;
}
int main(){
	string s; getline(cin, s);
	char a[100][100];
	int m = 0, n = 0, k;
	k = tach_xau(s,a,m,n);
	cout<<a[k];
	for(int i=0; i<k; i++){
		cout<<a[i][0];
	}
	cout<<"@ptit.edu.vn";
}