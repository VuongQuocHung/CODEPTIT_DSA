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
	
	int n; cin >> n;
	int a[n];
	FOR(i, 0, n - 1){ 
		cin >> a[i];
	}
	sort(a, a + n);
	cout << max({a[0] * a[1], a[n - 1] * a[n - 2], 
				a[n - 1] * a[n - 2] * a[n - 3], a[0] * a[1] * a[n - 1]});

	return 0;
}

//_______________________________B23DCCN375_______________________________//