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
		}else{
			if(n==0){
				if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
			}else{
				if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
			}
			a[m][n++] = s[i];
	    }
	}
	a[m][n]=0;
	return m;
}
int main(){
	int t; cin>>t;
	while(t--){
		int x; cin>>x; getchar();
		string s; 
		getline(cin, s); char a[100][100];
		int m=0, n=0, k = tach_xau(s,a,m,n);
		if(x==1){
		    cout<<a[k]<<" ";
		    for(int i=0; i<k; i++) cout<<a[i]<<" ";
		    cout<<"\n";
		}
		else{
			for(int i=1; i<=k; i++) cout<<a[i]<<" ";
		    cout<<a[0]<<"\n";
		}
	}
}