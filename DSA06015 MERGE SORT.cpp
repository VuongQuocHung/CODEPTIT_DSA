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

void merge(int a[], int left, int mid, int right){
	vector<int> v1(a + left, a + mid + 1);
	vector<int> v2(a + mid + 1, a + right + 1);
	int n1 = v1.size(), n2 = v2.size();
	int i = 0, j = 0;
	while(i < n1 && j < n2){
		if(v1[i] <= v2[j]){
			a[left++] = v1[i++];
		}
		else{
			a[left++] = v2[j++];
		}
	}
	while(i < n1){
		a[left++] = v1[i++];
	}
	while(j < n2){
		a[left++] = v2[j++];
	}
}

void merge_sort(int a[], int left, int right){
	if(left >= right) return;
	int mid = (left + right)/2;
	merge_sort(a, left, mid);
	merge_sort(a, mid + 1, right);
	merge(a, left, mid, right);
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
		int n; cin >> n; int a[n];
		for(int &i : a) cin >> i;
		merge_sort(a, 0, n - 1);
		for(int i : a) cout << i << ' ';
		cout << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//