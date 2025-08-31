#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define fspr fixed << setprecision
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define _Vuong_Quoc_Hung_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// nguyen am : A, E
// phu am : B, C, D, F, G, H

char c;
bool check_nguyen_am(char ch){
	if(ch == 'A' || ch == 'E')
		return true;
	return false;
}

bool KiemTra(string &s){
	for(int i = 0; i < s.size(); i++){
		if(check_nguyen_am(s[i])){
			if(i == 0 || i == s.size() - 1)
				continue;
			if(!check_nguyen_am(s[i - 1]) && !check_nguyen_am(s[i + 1]))
				return false;
		}
	}
	return true;
}
int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> c;
	string s = "ABC";
	for(char ch = 'D'; ch <= c; ch++)
		s += ch;
	do{
		if(KiemTra(s)){
			cout << s << '\n';
		}
	}while(next_permutation(s.begin(), s.end()));

	return 0;
}