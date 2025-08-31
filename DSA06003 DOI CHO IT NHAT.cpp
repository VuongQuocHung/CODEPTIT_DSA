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

int SelectionSort(int a[], int n){// sắp xếp chọn
	int cnt = 0;
	for(int i = 0; i < n - 1; i++){
		// giả sử phần tử tại vị trí i là nhỏ nhất
		int min_pos = i;
		// duyệt các phần tử ở sau vị trí đó về cuối
		for(int j = i + 1; j < n; j++){
			// nếu có phần tử nào nhỏ hơn a[min_pos] thì cập nhật min_pos
			if(a[j] < a[min_pos]){
				min_pos = j;			
			}
		}
		if(min_pos != i){ 
			swap(a[min_pos], a[i]);
			++cnt;
		}
   }
   return cnt;
}

void solve(int n){
	vector<ii> a(n);
	FOR(i, 0, n - 1){
		cin >> a[i].fi;
		a[i].se = i;
	}
	sort(all(a));
	int cnt = 0;
	FOR(i, 0, n - 1){
		if(a[i].se != i){
			swap(a[i].fi, a[a[i].se].fi);
			swap(a[i].se, a[a[i].se].se);
			if(a[i].se != i) --i;
			++cnt;
		}
	}
	cout << cnt << endl;
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
		int n;
		cin >> n;
		solve(n);
		// int a[n];
		// for(int i = 0; i < n; i++)
		// 	cin >> a[i];
		// cout << SelectionSort(a, n) << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//