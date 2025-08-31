#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
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

/* 	Cho dãy số A[] gồm có N phần tử. Tìm 2 vị trí i, j 
	sao cho j-i lớn nhất và A[j] > A[i] */

bool cmp(ii a, ii b){
	return a.fi < b.fi;
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
		int n; cin >> n;
		vector<ii> v; // v[i] lưu giá trị phần tử thứ i và chỉ số của nó (chính là i)
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			v.pb({x, i});
		}
		sort(all(v), cmp); // sắp xếp vector theo giá trị tăng dần
		int ans = -1e9, last = v[0].se;
		for(int i = 1; i < n; i++){
			if(v[i].se - last > ans){
				ans = v[i].se - last;
			}
			last = min(v[i].se, last); // luôn giữ last là chỉ số nhỏ nhất
		}
		cout << ans << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//