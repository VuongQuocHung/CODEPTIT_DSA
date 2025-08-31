#include <bits/stdc++.h>
using namespace std;
int dd[1000001];
int main(){
	int n; cin>>n; int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		dd[a[i]]++;
	}
	sort(a,a+n);
	for(int i=0; i<n; i++){
		if(dd[a[i]] > 0){
			cout<<a[i]<<" ";
			dd[a[i]] = 0;
		}
	}
}