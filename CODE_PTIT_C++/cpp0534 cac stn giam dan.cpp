#include <bits/stdc++.h>
using namespace std;
int check(string& s){
	int l = 0, r = s.length() - 1;
	if(r == 0) return 0;
	while(l < r){
		if(s[l] != s[r]) return 0;
		++l; --r;
	}
	return 1;
}
bool cmp(pair<string, int> a, pair<string, int> b){
	if(a.first.length() != b.first.length()) return a.first.length() > b.first.length();
	else return a.first > b.first;
}
int main(){
	string s;
	map<string, int> mp;
	while(cin >> s){
		if(check(s)){
			mp[s]++;
		}
	}
	vector<pair<string, int>> v;
	for(auto it : mp){
		v.push_back({it.first, it.second});
	}
	sort(v.begin(), v.end(), cmp);
	for(auto it : v){
		cout << it.first << ' ' << it.second << '\n';
	}
}