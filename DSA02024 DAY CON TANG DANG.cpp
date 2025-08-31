#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long
#define ii pair<int, int>
#define _Vuong_Quoc_Hung_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, a[100];
vector<int> current; // dãy con hiện tại
vector<string> ans; // lưu kết quả

void Try(int i){ // vị trí phần tử đang xét
	// nếu dãy con hiện tại có ít nhất 2 phần tử thì thêm vào vector
	if(current.size() >= 2){
		stringstream ss;
		for(int x : current) ss << x << " ";
		string tmp = ss.str();
		tmp.pop_back();
		ans.pb(tmp);
	}
	for(int j = i; j <= n; j++){
		if(current.empty() || a[j] > current.back()){
			current.pb(a[j]);
			Try(j + 1); // gọi Try đến j + 1 vì lúc này ta lấy phần tử thứ j
						// thêm vào current nên bắt đầu xét từ j + 1
			current.pop_back();
		}
	}
}

int main(){
	_Vuong_Quoc_Hung_
	
	cin >> n;
	for(int i = 1; i <= n; i++)cin >> a[i];
	Try(1);
	sort(ans.begin(), ans.end());
	for(string s : ans) cout << s << '\n';
	
	return 0;
}