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

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

int n, a[1005], tang[1005], giam[1005]; 
// tang[i] : tổng lớn nhất của dãy con tăng dần từ 1 đến i
// giam[i] : tổng lớn nhất của dãy con giảm dần từ i về n

void day_tang(){
	memset(tang, 0, sizeof(tang));
	FOR(i, 1, n){
		tang[i] = a[i];
		FOR(j, 1, i - 1) if(a[j] < a[i]) tang[i] = max(tang[i], tang[j] + a[i]);
	}
}

void day_giam(){
	memset(giam, 0, sizeof(giam));
	FORD(i, n, 1){
		giam[i] = a[i];
		FORD(j, n, i + 1) if(a[j] < a[i]) giam[i] = max(giam[i], giam[j] + a[i]);
	}
}

void solve(){
	int ans = -1e9;
	day_giam(); day_tang();
	//FOR(i, 1, n) cout << tang[i] << ' ' << a[i] << ' ' << giam[i] << endl;
	FOR(i, 1, n) ans = max(ans, tang[i] + giam[i] - a[i]);
	cout << ans << endl;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		FOR(i, 1, n) cin >> a[i];
		solve();
	}

	return 0;
}

//________________________________H_Ư_N_G_______________________________//