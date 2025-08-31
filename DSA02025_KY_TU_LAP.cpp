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

int n, x[1005], visited[1005], res = INT_MAX;
vector<string> v(1005);

int count(string s, string t){
	int cnt = 0;
	for(char c1 : s) for(char c2 : t) if(c1 == c2) ++cnt;
	return cnt;
}

// dem : số lượng chuỗi đã duyệt
// sum : tổng số lần lặp
// i : chuỗi được chọn gần nhất
void Try(int dem, int sum, int i){
	FOR(j, 1, n){
		if(!visited[j]){
			visited[j] = 1;
			if(dem == n) res = min(res, sum + count(v[i], v[j]));
			else if(res > sum && dem < n) Try(dem + 1, sum + count(v[j], v[i]), j);
			visited[j] = 0;
		}
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n; cin.ignore();
	FOR(i, 1, n) cin >> v[i];
	Try(1, 0, 0);
	cout << res;

	return 0;
}
