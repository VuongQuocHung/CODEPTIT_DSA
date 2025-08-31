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

int n;
vector<int> ans;
bool used[10];

void Try(int i){
	if(i == n){
		for(int x : ans)
			cout << x ;
		cout << '\n';
		return;
	}
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			if(i > 0 && abs(ans.back() - j) == 1)
				continue;
			used[j] = 1;
			ans.pb(j);
			Try(i + 1);
			ans.pop_back();
			used[j] = 0;
		}
	}
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
		cin >> n;
		Try(0);
	}
	
	return 0;
}