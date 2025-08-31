#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
	int t; cin>>t; 
	while(t--){
	    int n; cin>>n;
	    int a[n];
	    for(int i = 0; i<n; i++){
		    cin>>a[i];
	    }
	    sort(a, a+n);
	    int maxx = n-1, minn = 0;
	    while( minn <= maxx ){
	    	if(minn != maxx){
	    	    cout<<a[maxx]<<' '<<a[minn]<<' ';
	        }else cout<<a[maxx];
	    	++minn; --maxx;
		}
		cout<<'\n';
   }
}