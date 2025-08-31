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

int n, k, a[100005];

int Find(int left, int right){
	if(left > right) return -1;
	int mid = (left + right)/2;
	if(a[mid] == k) return mid;
	else if(a[mid] > k)
		return Find(left, mid - 1);
	else
		return Find(mid + 1, right);
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
		FOR(i, 1, n) cin >> a[i];
		int pos = Find(1, n);
		if(pos != -1) cout << pos << '\n';
		else cout << "NO\n";
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//