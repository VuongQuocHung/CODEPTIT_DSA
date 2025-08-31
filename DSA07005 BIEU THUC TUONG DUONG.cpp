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
	for(char x : s){
		if(x != ')') st.push(x); // đẩy hết các ký tự ko phải ) vào ngăn xếp
		else{
			string tmp; // lấy biểu thức ở đầu ngăn xếp ra
			while(!st.empty() && st.top() != '('){ // biểu thức sẽ là các ký tự chứa trong cặp () 
				tmp = st.top() + tmp;
				st.pop();
			}
			st.pop(); // loại bỏ dấu ( thừa
			char dau;
			if(!st.empty()) dau = st.top(); // lấy ra dấu ở trước biểu thức
			for(char ch : tmp){ // nếu dấu là - thì đổi dấu biểu thức, ko thì đẩy vào ngăn xếp
				if(dau == '-' && !st.empty()){
					if(ch == '+') st.push('-');
					else if(ch == '-') st.push('+');
					else st.push(ch);
				}
				else st.push(ch);
			}
		}
	}
	string res;
	while(!st.empty()){
		res.pb(st.top());
		st.pop();
	}
	reverse(all(res));
	cout << res << endl;
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
