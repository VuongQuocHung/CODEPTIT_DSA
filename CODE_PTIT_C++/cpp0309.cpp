#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	getchar();
	while(t--){
		string a;
		getline(cin, a);
		int cnt = 0;
		for(int i=0; i<a.length(); i++){
			if( (a[i-1]==' '||a[i-1]=='\t') && a[i]>='a' && a[i]<='z' ) cnt++;
		}
		cout<<cnt<<"\n";
	}
}