#include <bits/stdc++.h>
using namespace std;
int minn(int a[], int left, int right, int x){
	int res = -1;
	while(left <= right){
		int mid = (left+right)/2;
		if(a[mid] > x){
			res = mid;
			right = mid - 1;
		}else left = mid + 1;
	}
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin>>a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		for(int i = 0; i < n; i++){
			int pos = minn(b, 0, n - 1, a[i]);
			if(pos == -1) cout<<"_ ";
			else cout<<b[pos]<<' ';
		}
		cout<<'\n';
	}
}