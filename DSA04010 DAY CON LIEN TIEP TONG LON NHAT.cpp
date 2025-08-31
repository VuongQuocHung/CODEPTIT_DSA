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

/* tìm mảng con liên tục có tổng lớn nhất của mảng */

int n, a[10005];

int max_sum_mid(int left, int right, int mid){
	int sum_left_max = INT_MIN, sum_right_max = INT_MIN, sum = 0;
	FORD(i, mid, left){
		sum += a[i];
		sum_left_max = max(sum, sum_left_max);
	}
	sum = 0;
	FOR(i, mid + 1, right){
		sum += a[i];
		sum_right_max = max(sum, sum_right_max);
	}
	return sum_left_max + sum_right_max;
}

int max_sum(int left, int right){
	if(left == right) return a[left];

	int mid = (left + right)/2;

	int sum_left_max = max_sum(left, mid);

	int sum_right_max = max_sum(mid + 1, right);

	int sum_mid_max = max_sum_mid(left, right, mid);

	return max({sum_left_max, sum_mid_max, sum_right_max});
}

void thuat_toan_kanade(){
	int max_sum = -1e9, current_sum = 0;
	for(int i = 1; i <= n; i++){
		current_sum = max(a[i], current_sum + a[i]);
		max_sum = max(max_sum, current_sum);
	}
	cout << max_sum << endl;
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
		// cout << max_sum(1, n);
		thuat_toan_kanade();
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//