#include <bits/stdc++.h>
using namespace std;
int dem(int n, int a[]){
	if(n==1 || (n==2 && a[0] == a[1])) return 0;
	if( n==2 && a[0] != a[1]) return 1;
	int  l=0 ,  r = n-1, cnt = 0;
	while(l<=r){
		if(a[l] == a[r]){
			l++; r--;
		}else if(a[l] < a[r]){
		    a[l+1] += a[l];	 cnt++;
		    l++;
		}else{
			a[r-1]+=a[r]; cnt++;
			r--;
		}
	}
	return cnt;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		cout<<dem(n,a)<<"\n";
	}
}