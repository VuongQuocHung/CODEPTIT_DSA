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

bool check(int a[], int sorted_a[], int n){
	FOR(i, 0, n - 1){
		if(a[i] != sorted_a[i] && a[i] != sorted_a[n - i - 1])
			return false;
	}
	return true;
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
		int a[n], sorted_a[n];
		FOR(i, 0, n - 1){
			cin >> a[i];
			sorted_a[i] = a[i];
		}
		sort(sorted_a, sorted_a + n);
		if(check(a, sorted_a, n))
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//