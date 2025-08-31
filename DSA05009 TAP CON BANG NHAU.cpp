#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define fspr fixed << setprecision
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define _Vuong_Quoc_Hung_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, a[105];
int target = 0, min_value = 0;
bool ok = 0;

void Try(int i, int curr_sum, int cnt){
	for(int j = i; j <= n; j++){
		if(cnt < n && curr_sum + a[j] == target){
			ok = 1;
			return;
		}else if(curr_sum + min_value <= target) 
		Try(i + 1, curr_sum + a[j], cnt + 1);
		if(ok) return;
	}
}

int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		target = min_value = ok = 0;
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			target += a[i];
		}
		if(target % 2 == 1){
			cout << "NO\n";
		}else{
			sort(a + 1, a + n + 1);
			min_value = a[1];
			target /= 2;
			Try(1, 0, 0);
			if(ok) cout << "YES\n";
			else cout << "NO\n";
		}
	}

	return 0;
}