#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(O);

void chiaHet(string& s, int n){
	int mod = 0;
	for(int i = 0; i < s.size(); i++){
		mod = (mod * 10 + (s[i] - '0')) % n;
	}
	if(mod == 0) cout << 1 << '\n';
	else cout << 0 << '\n';
}

int main(){
	int t; cin >> t;
	while(t--){
		cin.ignore();
		string s;
		int n;
		cin >> s;
		chiaHet(s, 11);
	}
}