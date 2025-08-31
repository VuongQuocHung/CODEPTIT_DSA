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

int n, s, ans, ok = 0;
ll a[100];

void Try(int i, ll sum, int cnt){
	if(s == 0) return;
	for(int j = i; j <= n; j++){
		if(sum + a[j] == s){
			ok = 1;
			ans = min(ans, cnt + 1);
		}
		else if(sum + a[j] < s)
			Try(j + 1, sum + a[j], cnt + 1);
	}
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
		ans = 1e9;
		ok = 0;
		cin >> n >> s;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a + 1, a + n + 1, greater<int>());
		Try(1, 0, 0);
		if(!ok) cout << -1 << '\n';
		else cout << ans << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//