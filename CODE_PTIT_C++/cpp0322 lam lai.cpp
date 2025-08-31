#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(O);

void solve(){
	string s1, s2; cin >> s1 >> s2;
	int n1 = s1.size(), n2 = s2.size(), m = max(n1, n2);
	
	while(s1.size() < m) s1 = "0" + s1;
	
	while(s2.size() < m) s2 = "0" + s2;
	
	string ans = "";
	int nho = 0;
	
	for(int i = m - 1; i >= 0; i--){
		int tmp = (s1[i] - '0') + (s2[i] - '0') + nho;
		ans.push_back(tmp%10 + '0');
		nho = tmp/10;
	}
	if(nho > 0) ans.push_back(nho + '0');
	reverse(ans.begin(), ans.end());
	cout << ans << '\n';
}
int main(){
	int t; cin >> t; cin.ignore();
	while(t--){
		solve();
	}
}