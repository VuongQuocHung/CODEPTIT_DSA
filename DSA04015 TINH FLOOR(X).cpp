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

ll n, x;

int search(ll a[], int left, int right){
	int res = -1;
	while(left <= right){
		int mid = (left + right)/2;
		if(a[mid] <= x){
			res = mid;
			left = mid + 1;
		}else
			right = mid - 1;
	}
	return res;
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
		cin >> n >> x;
		ll a[n + 1];
		FOR(i, 1, n) cin >> a[i];
		cout << search(a, 1, n) << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//