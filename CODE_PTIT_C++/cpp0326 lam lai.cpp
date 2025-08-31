#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(O);

void solve(){
	string s1, s2; cin >> s1 >> s2;
	int n1 = s1.size(), n2 = s2.size(), m = n1 + n2;
	
	vector<int> tich(m, 0);
	
	for(int i = n1 - 1; i >= 0; i--){
		for(int j = n2 - 1; j >= 0; j--){
			int  nhan = (s1[i] - '0') * (s2[j] - '0');
			int kq = nhan + tich[i + j + 1];
			tich[i + j + 1] = kq % 10;
			tich[i + j] += kq/10;
		}
	}
	string ans;
	for(int i = 0; i < m; i++){
		if(!ans.empty() || tich[i] != 0){
			ans.push_back(tich[i] + '0');
		}
	}
	cout << ans << '\n';
}
int main(){
	int t; cin >> t; cin.ignore();
	while(t--){
		solve();
	}
}