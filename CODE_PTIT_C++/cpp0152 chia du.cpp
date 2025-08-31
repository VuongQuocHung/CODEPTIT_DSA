#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main(){
	hung;
	int t; cin >> t;
	while(t--){
		int a, m; cin >> a >> m;
		int ok = 0;
		for(int i = 0; i < m; i++){
			if(a * i % m == 1){
				cout << i << '\n';
				ok = 1;
				break;
			}
		}
		if(!ok) cout << -1 << '\n';
	}
}