#include <bits/stdc++.h>
using namespace std;
int check(int n){
	int ch = 0, le = 0;
	while(n>0){
		if( (n%10)%2 == 0) ch++;
		else le++;
		n/=10;
	}
	if(ch == le) return 1;
	return 0;
}
int main(){
	int n;
	cin>>n;
	int a = pow(10,n-1), b = pow(10,n);
	int cnt = 0;
	for(int i=a; i<b; i++){
		if(check(i)){
			++cnt;
		    cout<<i<<" ";
		    if(cnt%10 == 0) cout<<"\n";
		}
	}
}