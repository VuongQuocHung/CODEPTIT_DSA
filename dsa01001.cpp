#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define fspr fixed << setprecision
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define _Vuong_Quoc_Hung_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Sinh(){
	string s; cin >> s;
	for(int i = s.length() - 1; i >= 0; i--){
		if(s[i] == '1'){
			s[i] = '0';
		}else{
			s[i] = '1';
			break;
		}
	}
	cout << s << '\n';
}
int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		Sinh();
	}
	
	return 0;
}