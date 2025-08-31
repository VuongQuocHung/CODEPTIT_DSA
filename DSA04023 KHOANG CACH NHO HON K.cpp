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

int n, k, a[1000005];

int findLast(int left, int right, int value){
	int ans = -1;
	while(left <= right){
		int mid = (left + right)/2;
		if(a[mid] < value){
			ans = mid;
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
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
		cin >> n >> k;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a + 1, a + n + 1);
		ll cnt = 0;
		for(int i = 1; i <= n; i++){
			if(a[i] + k > a[n] && i != n){
				cnt += (n - i);
			}
			else{
				int pos = findLast(i + 1, n, a[i] + k);
				if(pos != -1){
					cnt += pos - i;
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//