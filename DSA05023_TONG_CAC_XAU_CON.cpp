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

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		string s; cin >> s;
		ll ans = 0;
		s = " " + s;
		for(int i = 1; i < s.size(); i++){
			for(int j = i; j < s.size(); j++){
				string tmp = s.substr(i, j - i + 1); // tạo các xâu con từ vị trí i, j - i + 1 là độ dài
				ans += stoll(tmp);
			}
		}
		cout << ans << endl;
	}

	return 0;
}

//________________________________H_Ư_N_G_______________________________//