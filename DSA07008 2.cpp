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
	
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<char> st;
		string res;
		for(char x : s){
			if(x == '(') st.push(x);
			else if(isalpha(x)) res.pb(x);
			else if(x == ')'){
				while(!st.empty() && st.top() != '('){
					res.pb(st.top());
					st.pop();
				}
				st.pop();
			}
			else{
				while(!st.empty() && do_uu_tien(st.top()) >= do_uu_tien(x)){
					res.pb(st.top());
					st.pop();
				}
				st.push(x);
			}
		}
		while(!st.empty()){
			res.pb(st.top());
			st.pop();
		}
		cout << res << endl;
	}

	return 0;
}
