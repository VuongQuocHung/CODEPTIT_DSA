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
vector<string> v(1005);
unordered_map<string, int> mp;

void in(){
	FOR(i, 1, k) cout << v[x[i]] << ' ';
	cout << endl;
}

void Try(int i){
	for(int j = x[i - 1] + 1; j <= n - k + i; j++){
		x[i] = j;
		if(i == k) in();
		else Try(i + 1);
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n >> k;
	string s;
	int cnt = 1;
	FOR(i, 1, n){
		cin >> s;
		mp[s]++;
		if(mp[s] == 1) v[cnt++] = s;
	}
	sort(v.begin() + 1, v.begin() + cnt);
	n = cnt - 1;
	Try(1);

	return 0;
}
