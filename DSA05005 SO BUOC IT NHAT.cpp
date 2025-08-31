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

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int &i : a)
			cin >> i;
		vector<int> dp(n + 1, 1);
		dp[0] = 1;
		int maxx = 0;
		for(int i = 1; i < n; i++){
			for(int j = 0; j < i; j++){
				if(a[j] <= a[i]){
					dp[i] = max(dp[i], dp[j] + 1);
				}
				maxx = max(dp[i], maxx);
			}
		}
		cout << n - maxx << endl;
	}

	return 0;	
}

//_______________________________B23DCCN375_______________________________//