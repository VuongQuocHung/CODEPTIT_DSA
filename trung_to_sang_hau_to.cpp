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


int do_uu_tien(char op) {
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
	
	int T;
	cin >> T;
	while(T--){
		string s; cin >> s;
		stack<char> st; // stack dùng để lưu các toán tử và dấu '('
		string res;
		for(char c : s){
			// nếu là toán hạng thì thêm vào xâu kết quả
			if(isalpha(c)) res.pb(c); 
			// nếu là dấu mở ngoặc thì thêm vào ngăn xếp
			else if(c == '(') st.push(c);
			// nếu gặp dấu đóng ngoặc thì lần lượt thêm các phần tử ở đầu ngăn xếp vào
			// xâu kết quả và xoá nó đi cho đến khi gặp dấu mở ngoặc tương ứng
			else if(c == ')'){
				while(!st.empty() && st.top() != '('){
					res.pb(st.top());
					st.pop();
				}
				st.pop(); // xoá bỏ dấu mở ngoặc
			}
			// nếu gặp toán tử +, -, *, /, ^
			else{
				// lần lượt thêm các toán tử có độ ưu tiên cao hơn (hoặc bằng) toán tử 
				// đang xét vào xâu kết quả và xoá chúng khỏi ngăn xếp
				while(!st.empty() && do_uu_tien(st.top()) >= do_uu_tien(c)){
					res.pb(st.top());
					st.pop();
				}
				st.push(c); // thêm toán tử hiện tại vào ngăn xếp
			}
		}
		// thêm các phần tử còn lại trong ngăn xếp vào xâu kết quả
		while(!st.empty()){
			res.pb(st.top());
			st.pop();
		}
		cout << res << endl;
	}

	return 0;
}
