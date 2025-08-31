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

int n, a[1000001];

int findLast(int left, int right){
	int ans = -1;
	while(left <= right){
		int mid = (left + right)/2;
		if(a[mid] == 0){
			ans = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}
	return ans;
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
		cin >> n;
		FOR(i, 1, n) cin >> a[i];
		int pos = findLast(1, n);
		if(pos == -1) cout << 0 << '\n';
		else cout << pos << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//