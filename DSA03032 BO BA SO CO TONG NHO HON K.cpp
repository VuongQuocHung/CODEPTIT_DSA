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

int findLast(int a[], int left, int right, int value){
	int ans = -1;
	while(left <= right){
		int mid = (left + right)/2;
		if(a[mid] < value){
			ans = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
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
		int n, k; cin >> n >> k;
		int a[n];
		for(int &i : a) cin >> i;
		ll cnt = 0;
		sort(a, a + n);
		for(int i = 0; i < n - 2; i++){
			if(a[i] >= k) break;
			for(int j = i + 1; j < n - 1; j++){
				auto it = lower_bound(a + j + 1, a + n, k - a[i] - a[j]);
				cnt += (it - (a + j + 1));
			}
		}
		cout << cnt << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//