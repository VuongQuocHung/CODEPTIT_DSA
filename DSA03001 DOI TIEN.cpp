#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	int tien[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	while(t--){
		int n; cin >> n;
		int cnt = 0;
		for(int i = 9; i >= 0; i--){
			while(n >= tien[i]){
				n -= tien[i];
				++cnt;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//