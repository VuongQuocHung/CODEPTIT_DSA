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

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

int a[1005], dp[1005]; // dp[i] : tổng lớn nhất của dãy con tăng dần từ 1 đến i

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		memset(dp, 0, sizeof(dp));
		int n; cin >> n;
		FOR(i, 1, n){ 
			cin >> a[i];
			dp[i] = a[i];
		}
		FOR(i, 1, n){
			FORD(j, i - 1, 0)
				if(a[j] < a[i]) // nếu thoả mãn điều kiện dãy con tăng dần
					dp[i] = max(dp[i], dp[j] + a[i]);
		}
		cout << *max_element(dp + 1, dp + n + 1) << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//