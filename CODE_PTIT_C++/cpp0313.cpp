#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; getline(cin, s);
	stringstream ss(s);
	string word; cin>>word;
	string tmp;
	while(ss>>tmp){
		if(tmp.compare(word) != 0) cout<<tmp<<" ";
	}
}