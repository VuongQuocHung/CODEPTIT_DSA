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

ll prefix_sum_A[1000007], prefix_sum_B[1000007]; // mảng cộng dồn cho mảng a và b
int n;

int Find(ll a[], ll b[], int left, int right){
	if(left > right) return -1;

	int mid = (left + right)/2;

	// nếu giá trị mảng cộng dồn của a và b tại vị trí mid khác nhau
	// tức là từ phần tử khác nhau của a và b nằm từ left đến mid
	if(prefix_sum_A[mid] != prefix_sum_B[mid]){
		int res = Find(a, b, left, mid - 1);
		if(res != -1) return res;
		return mid;
	}
	else return Find(a, b, mid + 1, right);
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
		ll a[n + 1], b[n];

		FOR(i, 1, n){
			cin >> a[i];
			prefix_sum_A[i] = prefix_sum_A[i - 1] + a[i];
		}
		FOR(i, 1, n - 1){
			cin >> b[i];
			prefix_sum_B[i] = prefix_sum_B[i - 1] + b[i];
		}
		int pos = Find(a, b, 1, n - 1);
		if(pos != -1) cout << pos << '\n';
		else cout << n << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//