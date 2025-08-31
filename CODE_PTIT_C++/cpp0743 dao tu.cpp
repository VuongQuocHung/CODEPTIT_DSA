#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t; getchar();
	while(t--){
		string s; getline(cin, s);
		stringstream ss(s);
		string tu;
		vector<string> words;
		while(ss >> tu) words.push_back(tu);
		int n = words.size();
		for(int i = n - 1; i >= 0; i--) cout<<words[i]<<' ';
		cout<<'\n';
	}
}