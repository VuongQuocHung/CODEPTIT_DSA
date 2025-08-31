#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n; getchar(); 
	string s[n]; int cnt = 0;
	for(int i=0; i<n; i++){
		string a; getline(cin, a);
		int ok = 1;
		for(int j=0; j<i; j++){
			if(s[j] == a){
				++cnt;
				ok = 0; break;
			}
		}
		if(ok){
			s[cnt++] = a;
		}
	}
	cout<<cnt-1;
}