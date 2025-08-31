#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
	    int n,k; cin>>n>>k; int a[n][n], b[n*n], cnt = 0;
	    for(int i=0; i<n; i++){
		    for(int j=0; j<n; j++){
			    cin>>a[i][j]; b[cnt++] = a[i][j];
		    }
	    }
	    sort(b, b+cnt);
	    cout<<b[k-1]<<"\n";
    }
}