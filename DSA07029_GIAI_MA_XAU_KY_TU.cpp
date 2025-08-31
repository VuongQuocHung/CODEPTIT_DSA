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

void solve(string s){
	stack<char> st;
	int n = s.size();
	FOR(i, 0, n - 1){
		// đẩy hết toán hạng, toán tử và dấu [ vào ngăn xếp
		if(s[i] != ']') st.push(s[i]);
		// khi gặp dấu ]
		else{
			string tmp; // lấy biểu thức ở trong cặp dấu [] tương ứng
			while(!st.empty() && st.top() != '['){
				tmp = st.top() + tmp;
				st.pop();
			}
			st.pop(); // xoá bỏ dấu [ tương ứng
			string he_so;
			while(!st.empty() && isdigit(st.top())){
				he_so = st.top() + he_so;
				st.pop();
			}
			int i = 1;
			if(he_so.size()) i = stoi(he_so);
			string str;
			while(i--) str += tmp; // lặp i lần biểu thức ở trên
			for(char c : str) st.push(c);
		}
	}
	string ans;
	while(!st.empty()){
		ans = st.top() + ans;
		st.pop();
	}
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
	cin.ignore();
	while(T--){
		string s;
		cin >> s;
		solve(s);
	}

	return 0;
}
