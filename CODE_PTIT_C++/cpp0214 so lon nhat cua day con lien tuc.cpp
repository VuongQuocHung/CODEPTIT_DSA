#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
void testcase(){
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for(int& i : a) cin >> i;
	int maxx = INT_MIN;
	for(int i = 0; i < k; i++){
		maxx = max(maxx, a[i]);
	}
	cout << maxx << ' ';
	for(int i = 1; i <= n - k; i++){
		if(a[i - 1] == maxx){
			maxx = *max_element(a.begin() + i, a.begin() + i + k);
		}
		if(a[i + k - 1] > maxx) maxx = a[i + k - 1];
		cout << maxx << ' ';
	}
	cout << '\n';
}
int main(){
	faster;
	int t; cin >> t;
	while(t--){
		testcase();
	}
}