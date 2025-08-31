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

int dd[100005];

bool cmp(int a, int b){
	if(dd[a] != dd[b]) return dd[a] > dd[b];
	return a < b;
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
		memset(dd, 0, sizeof(dd));
		int n; cin >> n; int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			dd[a[i]]++;
		}
		sort(a, a + n, cmp);
		for(int x : a)
			cout << x << ' ';
		cout << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//