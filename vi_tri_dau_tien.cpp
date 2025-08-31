#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define fspr fixed << setprecision
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define _Vuong_Quoc_Hung_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, x, a[1005];
int Find(){
	int l = 0, r = n - 1, res = -1;
	while(l <= r){
		int mid = (l + r)/2;
		if(a[mid] == x){
			res = mid;
			r = mid - 1;
		}else if(a[mid] > x){
			r = mid - 1;
		}else
			l = mid + 1;
	}
	return res;
}

int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n >> x;
	FOR(i, 0, n - 1) cin >> a[i];
	cout << Find();

	return 0;
}