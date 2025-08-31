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

int a[100005], b[100005];

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		memset(b, 0, sizeof(b));
		int n; cin >> n;
		FOR(i, 0, n - 1){
			cin >> a[i];
			b[a[i]] = 1;
		}
		sort(a, a + n);
		int cnt = 0;
		FOR(i, a[0], a[n - 1]){
			if(b[i] == 0) ++cnt;
		}
		cout << cnt << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//