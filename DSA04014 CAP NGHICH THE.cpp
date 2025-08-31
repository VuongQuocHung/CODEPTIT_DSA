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

ll merge(ll a[], int left, int mid, int right){
	vector<ll> v1(a + left, a + mid + 1);
	vector<ll> v2(a + mid + 1, a + right + 1);
	int i = 0, j = 0, cnt = left;
	ll so_cap_nghich_the = 0;
	while(i < v1.size() && j < v2.size()){
		if(v1[i] <= v2[j]){
			a[cnt] = v1[i];
			++cnt; ++i;
		}
		else{
			so_cap_nghich_the += v1.size() - i;
			a[cnt] = v2[j];
			++cnt; ++j;
		}
	}
	while(i < v1.size()){
		a[cnt++] = v1[i++];
	}
	while(j < v2.size()){
		a[cnt++] = v2[j++];
	}
	return so_cap_nghich_the;
}

ll mergeSort(ll a[], int left, int right){
	ll dem = 0;
	if(left < right){
		int mid = (left + right)/2;
		dem += mergeSort(a, left, mid);
		dem += mergeSort(a, mid + 1, right);
		dem += merge(a, left, mid, right);
	}
	return dem;
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
		ll a[n];
		for(ll &i : a) cin >> i;
		cout << mergeSort(a, 0, n - 1) << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//