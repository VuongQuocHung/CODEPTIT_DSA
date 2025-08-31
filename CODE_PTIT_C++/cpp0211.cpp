#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		int maxx = -1;
		for(int& i : a) cin>>i;
		for(int i = 0 ; i<n; i++){
			for(int j = n-1; j>=i; j--){
				if(j - i <= maxx) break;
				if(a[i] <= a[j]) maxx = max(maxx, j-i);
			}
		}
		cout<<maxx<<"\n";
	}
}