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

// trả về độ ưu tiên của toán tử
int uu_tien(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    if(op == '^') return 3;
    return 0;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		string res;
		for(char c : s){
			// nếu gặp toán hạng thì thêm vào xâu kết quả
			if(isalpha(c)) res.pb(c);

			// nếu gặp dấu ( thì thêm vào ngăn xếp
			else if(c == '(') st.push(c);

			// nếu gặp dấu ) thì :
			else if(c == ')'){
				// lần lượt thêm các phần tử ở đầu ngăn xếp vào xâu kết quả
				// cho đến khi gặp dấu ( tương ứng
				while(!st.empty() && st.top() != '('){
					res.pb(st.top());
					st.pop();
				}
				st.pop(); // xoá bỏ dấu ( trong ngăn xếp
			}

			// nếu gặp toán tử thì :
			else{
				// lần lượt thêm các phần tử ở đầu ngăn xếp và có mức độ ưu tiên
				// cao hơn toán tử đang xét vào xâu kết quả
				while(!st.empty() && uu_tien(st.top()) >= uu_tien(c)){
					res.pb(st.top());
					st.pop();
				}
				st.push(c);
			}
		}
		
		// thêm các ký tự còn lại trong ngăn xếp vào xâu kết quả
		while(!st.empty()){
			res.pb(st.top());
			st.pop();
		}
		cout << res << endl;
	}

	return 0;
}