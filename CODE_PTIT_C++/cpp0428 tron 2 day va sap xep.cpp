#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    	int n, m; cin>>n>>m;
    	int num = 0;
    	int a[n+m];
    	for(int i = 0; i < n + m; i++){
    		cin>>a[i];
		}
		sort(a, a+n+m);
		for(int i = 0; i < n + m; i++) cout<<a[i]<<' ';
		cout<<'\n';
    }
}