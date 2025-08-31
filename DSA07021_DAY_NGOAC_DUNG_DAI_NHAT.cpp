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

/************************ MADE BY VƯƠNG QUỐC HƯNG ************************/

int solve(string s){
	stack<int> st; // stack để lưu chỉ số các ký tự
	st.push(-1); // tính độ dài chuỗi con hợp lệ bắt đầu từ chỉ số 0 và xử lý các trường hợp không có dấu ngoặc mở tương ứng
	int ans = -1;
	for(int i = 0; i < s.size(); i++){
		// đẩy vị trị các ký tự '(' vào ngăn xếp :
		if(s[i] == '(') st.push(i);
		// nếu gặp ')' :
		else{
			st.pop(); // xoá bỏ ký tự '(' tương ứng 
			// i - st.top() chính là độ dài chuỗi ngoặc đúng ta 
			if(!st.empty()) ans = max(ans, i - st.top());
			else st.push(i);
		}
	}
	return ans;
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
		string s;
		cin >> s;
		cout << solve(s) << endl;
	}

	return 0;
}
