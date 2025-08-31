#include <bits/stdc++.h>
using namespace std;
void testcase(){
	string a; cin>>a; int n = a.length(), cnt = 0;;
	for(int i = 0; i<n-1; i++){
		for(int j =i+1; j<n; j++){
			if(a[j] == a[i]) ++cnt;
		}
	}
	cout<<cnt + n<<"\n";
}
int main(){
	int t; cin>>t;
	while(t--){
		testcase();
	}  
}