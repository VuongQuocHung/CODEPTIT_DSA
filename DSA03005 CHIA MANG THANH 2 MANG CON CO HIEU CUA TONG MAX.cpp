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
	
	
	int t;
	cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n + 1];
		for(int i = 1; i <= n; i++)
			cin >> a[i];

		sort(a + 1, a + n + 1);

		if(k > n - k) 
			k = n - k;

		int sum_left = 0;
		for(int i = 1; i <= k; i++)
			sum_left += a[i];

		int sum_right = 0;
		for(int i = k + 1; i <= n; i++)
			sum_right += a[i];
		
		cout << sum_right - sum_left << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//