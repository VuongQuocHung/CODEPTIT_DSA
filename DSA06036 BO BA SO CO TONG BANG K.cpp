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

unordered_map<int, int> mp;

bool check(int a[], int n, int K){
	for(int i = 0; i < n - 2; i++){
		for(int j = i + 1; j < n - 1; j++){
			if(binary_search(a + j + 1, a + n, K - a[i] - a[j]))
				return true;
		}
	}
	return false;
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
		int n, K;
		cin >> n >> K;
		int a[n];
		for(int &i : a){
			cin >> i;
		}
		sort(a, a + n);
		if(check(a, n, K))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//