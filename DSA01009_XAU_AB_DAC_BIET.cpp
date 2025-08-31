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

/************************ MADE BY VƯƠNG QUỐC HƯNG ************************/

int n, k, x[1005];
vector<vi> ds;

bool check(vector<int> &v){
	v.pb(-1);
	int cnt1 = 0, cnt2 = 0;
	for(int i : v){
		if(i == 0) ++cnt1;
		else if(i == 1){
			if(cnt1 > k) return false;
			if(cnt1 == k) ++cnt2;
			cnt1 = 0;
		}
	}
	v.pop_back();
	if(cnt1 == k && cnt2 == 0) return 1;
	return cnt2 == 1;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n){
			vector<int> v(x + 1, x + i + 1);
			if(check(v)) ds.pb(v);
		}
		else if(i < n) Try(i + 1);
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n >> k;
	Try(1);
	cout << ds.size() << endl;
	for(auto v : ds){
		for(int i : v){
			if(i == 0) cout << 'A';
			else cout << 'B';
		}
		cout << endl;
	}

	return 0;
}
