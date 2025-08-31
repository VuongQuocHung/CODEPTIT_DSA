#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int cnt=0;
		long long x=0;
		for(int i=s.size()-1;i>=0;i--){
			x = x*2 + (s[i] - '0');
			x%=5;
		}
		if(x%5==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
}