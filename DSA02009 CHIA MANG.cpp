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

int n, k, a[100];
int target = 0, ok = 0;

void Try(int cnt, int sum){
	if(ok) return;
	if(cnt == k){
		ok = 1;
		return;
	}
	for(int j = 1; j <= n; j++){
		if(sum == target) Try(cnt + 1, 0);
		else{
			if(sum > target) return;
			Try(cnt, sum + a[j]);
		}
	}
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
		target = ok = 0;
		cin >> n >> k;
		int sum = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			sum += a[i];
		}
		if(sum % k)
			cout << 0 << '\n';
		else{
			target = sum / k;
			Try(0, 0);
			cout << ok << '\n';
		}
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//