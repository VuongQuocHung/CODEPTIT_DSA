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

int k, res;
string s;

void Try(int pos, int cnt){
	// pos : vị trí phần tử hiện tại, cnt : số lần đã hoán đổi
	res = max(res, stoi(s)); // mỗi lần gọi đệ quy thì cập nhật kết quả
	
	if(cnt == k) return;

	int len = s.size();
	for(int i = pos; i < len; i++){
		for(int j = i + 1; j < len; j++){
			if(s[i] < s[j]){ // Nhánh cận
				swap(s[i], s[j]);
				Try(i, cnt + 1);
				swap(s[i], s[j]);
			}
		}
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
		res = 0;
		cin >> k >> s;
		Try(0, 0);
		cout << res << '\n';
	}
	
	return 0;
}