#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define Hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	Hung;
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= 2*n - 1; j++){
			if(j == n - 1 + i || j == n + 1 - i) cout << "*";
			else cout << ' ';
		}
		cout << '\n';
	}

	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= 2*n - 1; j++){
			if(j == i || j == 2*n - i) cout << "*";
			else cout << ' ';
		}
		cout << '\n';
	}
}