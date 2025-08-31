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

int n, x, A[1000005];

bool cmp(int a, int b){
	return abs(a - x) < abs(b - x);
}

int main(){
	faster();
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	
	int t;
	cin >> t;
	while(t--){
		cin >> n >> x;
		for(int i = 1; i <= n; i++) cin >> A[i];
		stable_sort(A + 1, A + n + 1, cmp);
		for(int i = 1; i <= n; i++) cout << A[i] << ' ';
		cout << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//