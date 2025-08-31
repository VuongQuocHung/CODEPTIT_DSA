#include <bits/stdc++.h>
using namespace std;
int solve(string& s, int k){
	int cnt = 0;
	for(int i = 0; i < (int)s.length(); i++){
		int sum = 0;
		for(int j = i; j < (int)s.length(); j++){
			sum = sum * 10 + s[j] - '0';
			sum %= k;
			if(sum == 0) ++cnt;
		}
	}
	return cnt;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; cin >> s;
		cout << solve(s, 8) - solve(s, 24) << '\n';
	}
}