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

void twoPointers(int a[], int n){
	sort(a, a + n, greater<int>());
	int cnt = 0, left = 0, right = n/2;
	while(left < n/2 && right < n){
		if(a[left] >= 2 * a[right]){
			++cnt; ++left; ++right;
		}else{
			++right;
		}
	}
	cout << n - cnt << endl;
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
		int n; cin >> n; int a[n];
		for(int &i : a)
			cin >> i;
		twoPointers(a, n);
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//