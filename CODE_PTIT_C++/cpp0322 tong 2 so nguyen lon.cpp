#include <bits/stdc++.h>
using namespace std;
void lat_xau(string& a){
	int l = 0, r = a.length()-1;
	while(l<=r){
		char tmp = a[l];
		a[l]=a[r];
		a[r]=tmp;
		++l; --r;
	}
}
void solve(string& s1, string& s2){
	lat_xau(s1); lat_xau(s2);
	int n1 = s1.length(), n2 = s2.length();
	int a[1005]={0}, b[1005]={0}, res[1005];
	for(int i = 0; i<n1; i++) a[i] = s1[i] - '0';
	for(int i = 0; i<n2; i++) b[i] = s2[i] - '0';
	int cnt = 0, nho = 0;
	for(int i = 0; i<n1; i++){
		int kq = a[i] + b[i] + nho;
		res[cnt++] = kq%10;
		nho = kq/10;
	}
	if(nho>0) res[cnt++] = nho;
	for(int i = cnt-1; i>=0; i--) cout<<res[i];
	cout<<"\n";
}
int main(){
	int t; cin>>t; getchar();
	while(t--){
		string a, b; cin>>a>>b;
		int n = a.length(), m = b.length();
		if(n>m || ( n == m && a>b)) solve(a,b);
		else solve(b,a);
	}
}