#include <bits/stdc++.h>
using namespace std;
int dd[100001];
bool cmp(int x, int y){
	if(dd[x] != dd[y]) return dd[x] > dd[y];
	else{
		return x < y;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n];
		for(int i = 0; i < n; i++){
			cin>>a[i];
			dd[a[i]]++;
		}
		sort(a, a + n, cmp);
		for(int i : a) cout<<i<<' ';
		memset(dd, 0, sizeof(dd));
		cout<<'\n';
		
	}
}