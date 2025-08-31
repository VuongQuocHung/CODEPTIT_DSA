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

int n, k, a[100], s = 0, res = 0;

void Try(int i, int sum, int cnt){
	if(cnt == k && i == n + 1) ++res;
	for(int j = i; j <= n; j++){
		sum += a[j];
		if(sum == s) Try(j + 1, 0, cnt + 1);
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		s += a[i];
	}
	if(s % k != 0){
		cout << 0;
		return 0;
	}
	s = s / k;
	Try(1, 0, 0);
	cout << res;

	return 0;
}

//_______________________________B23DCCN375_______________________________//