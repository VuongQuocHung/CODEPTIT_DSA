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

int n, s, a[50];
int ok = 0, ans = 1e9;

void Try(int i, int sum, int cnt){
	FOR(j, i, n){
		if(sum + a[j] > s)
			continue;
		if(sum + a[j] == s){
			ok = 1;
			ans = min(ans, cnt + 1);
		}else
			Try(j + 1, sum + a[j], cnt + 1);
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n >> s;
	FOR(i, 1, n) cin >> a[i];
	sort(a + 1, a + n + 1, greater<int>());
	Try(1, 0, 0);
	if(!ok) cout << -1 << '\n';
	else cout << ans << '\n';

	return 0;
}

//_______________________________B23DCCN375_______________________________//