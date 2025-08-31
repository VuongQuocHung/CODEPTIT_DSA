#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/************************ MADE BY VƯƠNG QUỐC HƯNG ************************/

int n;

void solve(){
	queue<int> Q;
	Q.push(9);
	while(!Q.empty()){
		int x = Q.front(); Q.pop();
		if(x % n == 0){
			cout << x << endl;
			return;
		}
		Q.push(x * 10 + 0);
		Q.push(x * 10 + 9);
	}
}

int main(){
	faster();
	
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		solve();
	}

	return 0;
}
