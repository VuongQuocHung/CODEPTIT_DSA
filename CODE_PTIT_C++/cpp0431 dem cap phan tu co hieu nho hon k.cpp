#include <bits/stdc++.h>
using namespace std;
int last(int a[], int left, int right, int x){
	int res = -1;
	while(left <= right){
		int mid = (left + right)/2;
		if(a[mid] < x){
			res = mid;
			left = mid + 1;
		}else right = mid - 1;
	}
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n, k ; cin>>n>>k;
		int a[n];
		for(int& i : a) cin>>i;
		sort(a, a + n);
		long long cnt = 0;
		for(int i = 0; i < n; i++){
			int tmp = a[i] + k;
			int last_pos = last(a, i+1, n-1, tmp);
			if( last_pos != -1){
				cnt += 1ll*( last_pos - i );
			}
		}
		cout<<cnt<<'\n';
	}
}