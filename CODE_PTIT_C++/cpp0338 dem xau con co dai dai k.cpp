#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		string s; cin>>s;
		int k; cin>>k;
		unordered_set<char> se;
		int cnt = 0;
		for(int i = 0; i < s.size(); i++){
			for(int j = i; j < s.size(); j++){
				se.insert(s[j]);
				if(se.size() == k) ++cnt;
				else if(se.size() > k){
					break;
				}
			}
			se.clear();
		}
		cout<<cnt<<'\n';
	}
}