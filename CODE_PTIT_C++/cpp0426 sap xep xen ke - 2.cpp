#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n];
		for(int& i : a){
			cin>>i;
		}
		sort(a, a + n);
		int res[n], left = 0, right = n-1, i = 0, j = 1;
		while( left <= right ){
			res[i] = a[right];
			res[j] = a[left];
			i+=2; j+=2;
			++left; --right;
		}
		for(int i : res){
			cout<<i<<' ';
		}
		cout<<'\n';
	}
}