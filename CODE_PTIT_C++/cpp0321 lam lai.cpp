#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
void solve(){
	string s1, s2; cin >> s1 >> s2;
	int n1 = s1.length(), n2 = s2.length();
	
	int m = max(n1, n2);
	while(s1.length() < m) s1 = "0" + s1;
	while(s2.length() < m) s2 = "0" + s2;
	
	if(s1 < s2) swap(s1, s2);
	
	string res = "";
	int nho = 0;
	for(int i = m - 1; i >= 0; i--){
		int tmp = (s1[i] - '0') - (s2[i] - '0') - nho; 
		if(tmp < 0){
			res.push_back(tmp + 10 + '0');
			nho = 1;
		}else{
			res.push_back(tmp + '0');
			nho = 0;
		}
	}
	reverse(res.begin(), res.end());
	cout << res << '\n';
}
int main(){
	faster;
	int t; cin >> t; cin.ignore();
	while(t--){
		solve();
	}
}