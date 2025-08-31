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

vector<vi> v;
vector<int> a;
int n;

void init(){
	a.clear();
	for(int i = 1; i <= n; i++)
		a.pb(i);
}

void sinh(){
	v.clear();
	while(1){
		v.pb(a);

		int i = n - 2;
		while(i >= 0 && a[i] > a[i + 1]) --i;
		if(i == -1) break;

		int j = n - 1;
		while(j > i && a[j] < a[i]) --j;

		swap(a[i], a[j]);

		sort(a.begin() + i + 1, a.end());
	}
	reverse(v.begin(), v.end());
	for(auto a : v){
		for(int i : a) cout << i;
		cout << ' ';
	}
	cout << '\n';
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
		init();
		sinh();
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//