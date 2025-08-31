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

vector<int> v;
// v[i] lưu giá trị nhỏ nhất của phần tử cuối cùng của các dãy con tăng dần có độ dài i + 1

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	cin >> n;
	int a[n + 1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		if(v.empty() || a[i] > v.back()){
			v.pb(a[i]);
		}
		else{
			auto it = lower_bound(all(v), a[i]);
			*it = a[i];
		}
	}
	cout << v.size() << endl;

	return 0;
}

//_______________________________B23DCCN375_______________________________//