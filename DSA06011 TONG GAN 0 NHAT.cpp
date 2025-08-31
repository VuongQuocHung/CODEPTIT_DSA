#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
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

bool cmp(int a, int b){
	return abs(a) < abs(b);
}
int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		FOR(i, 0, n - 1) cin >> a[i];
		int ans = INT_MAX;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(abs(a[i] + a[j]) < abs(ans)){
					ans = a[i] + a[j];
					cout << a[i] << ' ' << a[j] << ' ' << ans << endl;
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//