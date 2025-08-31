#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	for(auto x : s){
		x = (char)tolower(x);
		if(x != 'u' && x != 'e' && x != 'o' && x != 'a' && x != 'i' && x != 'y'){
			cout<<"."<<x;
		}
	}
}