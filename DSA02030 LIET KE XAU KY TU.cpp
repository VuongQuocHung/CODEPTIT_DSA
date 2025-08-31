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

char c;
int k;
string curr;

void Try(char st){
	if(curr.size() == k){
		cout << curr << '\n';
		return;
	}
	for(char ch = st; ch <= c; ch++){
		curr.pb(ch);
		Try(ch);
		curr.pop_back();
	}
}


int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> c >> k;
	Try('A');

	return 0;
}